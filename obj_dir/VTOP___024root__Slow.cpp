// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP__Syms.h"
#include "VTOP___024root.h"

void VTOP___024root___ctor_var_reset(VTOP___024root* vlSelf);

VTOP___024root::VTOP___024root(VTOP__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP___024root___ctor_var_reset(this);
}

void VTOP___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTOP___024root::~VTOP___024root() {
}

// Savable
void VTOP___024root::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0xd58abacfd1f591daULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<clock;
    os<<reset;
    os<<io_read_0_ready;
    os<<io_read_0_valid;
    os<<io_read_0_bits;
    os<<io_read_1_ready;
    os<<io_read_1_valid;
    os<<io_read_1_bits;
    os<<io_read_2_ready;
    os<<io_read_2_valid;
    os<<io_read_2_bits;
    os<<io_read_3_ready;
    os<<io_read_3_valid;
    os<<io_read_3_bits;
    os<<io_write_0;
    os<<io_write_1;
    os<<TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full;
    os<<TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value;
    os<<TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value;
    os<<TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full;
    os<<TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match;
    os<<TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__empty;
    os<<TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__unnamedblk1__DOT__do_deq;
    os<<__Vtrigrprev__TOP__clock;
    os<<__VactContinue;
    os<<__VstlIterCount;
    os<<__VactIterCount;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        os<<TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__Vm_traceActivity[__Vi0];
    }
}
void VTOP___024root::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0xd58abacfd1f591daULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>clock;
    os>>reset;
    os>>io_read_0_ready;
    os>>io_read_0_valid;
    os>>io_read_0_bits;
    os>>io_read_1_ready;
    os>>io_read_1_valid;
    os>>io_read_1_bits;
    os>>io_read_2_ready;
    os>>io_read_2_valid;
    os>>io_read_2_bits;
    os>>io_read_3_ready;
    os>>io_read_3_valid;
    os>>io_read_3_bits;
    os>>io_write_0;
    os>>io_write_1;
    os>>TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full;
    os>>TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value;
    os>>TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value;
    os>>TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full;
    os>>TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match;
    os>>TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__empty;
    os>>TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__unnamedblk1__DOT__do_deq;
    os>>__Vtrigrprev__TOP__clock;
    os>>__VactContinue;
    os>>__VstlIterCount;
    os>>__VactIterCount;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        os>>TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__Vm_traceActivity[__Vi0];
    }
}
