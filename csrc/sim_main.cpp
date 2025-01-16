// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

// Include common routines
#include <verilated.h>
#include <verilated_fst_c.h>

// Include model header, generated from Verilating "top.v"
#include "VTOP.h"
#define Vtop VTOP

static VerilatedFstC* m_trace = new VerilatedFstC;

uint64_t sim_time = 0;

void tick(Vtop* top, int times = 1) {
    for (int i = 0; i < times; i++) {
        top->clock = 0;
        top->eval();
        sim_time++;
        m_trace->dump(sim_time);
        top->clock = 1;
        top->eval();
        sim_time++;
        m_trace->dump(sim_time);
    }
}

void reset(Vtop* top) {
    top->reset = 1;
    tick(top);
    tick(top);
    top->reset = 0;
}

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;

    contextp->commandArgs(argc, argv);

    VTOP* top = new Vtop{contextp};
    Verilated::traceEverOn(true);
    top->trace(m_trace, 50);
    m_trace->open("./waveform.fst");

    reset(top);
    // Simulate until $finish
    //while (sim_time < 500) {

        // Evaluate model
        tick(top);
        top->io_write_arch_idx_0 = 1;
        top->io_write_arch_idx_1 = 2;
        top->io_write_en_0 = 1;
        top->io_write_en_1 = 0;
        top->io_write_pyhsical_0 = 56;
        top->io_write_pyhsical_1 = 0;
        tick(top);
        top->io_write_en_0 = 0;
        tick(top,4);
        top->io_read_arch_idx_0 = 1;
        tick(top,2);
        top->io_bak_en = 1;
        tick(top);
        top->io_bak_en = 0;
        tick(top,2);
        top->io_write_en_1 = 1;
        top->io_write_pyhsical_1 = 60;
        top->io_write_arch_idx_1 = 2;
        tick(top);
        top->io_write_en_1 = 0;
        tick(top);
        top->io_rev_en = 1;
        tick(top);
        top->io_rev_en = 0;
        tick(top,2);

    //}

    // Final model cleanup
    top->final();
    m_trace->close();

    // Destroy model
    delete top;

    printf("Simulation complete\n");

    // Return good completion status
    return 0;
}
