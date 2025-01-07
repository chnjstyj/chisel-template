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

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;

    contextp->commandArgs(argc, argv);

    VTOP* top = new Vtop{contextp};
    Verilated::traceEverOn(true);
    top->trace(m_trace, 50);
    m_trace->open("./waveform.fst");

    // Simulate until $finish
    while (!contextp->gotFinish()) {

        // Evaluate model
        top->eval();
    }

    // Final model cleanup
    top->final();

    // Destroy model
    delete top;

    // Return good completion status
    return 0;
}
