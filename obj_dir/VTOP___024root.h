// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_save.h"

class VTOP__Syms;

class VTOP___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_read_0_ready,0,0);
    VL_OUT8(io_read_0_valid,0,0);
    VL_OUT8(io_read_0_bits,7,0);
    VL_IN8(io_read_1_ready,0,0);
    VL_OUT8(io_read_1_valid,0,0);
    VL_OUT8(io_read_1_bits,7,0);
    VL_IN8(io_read_2_ready,0,0);
    VL_OUT8(io_read_2_valid,0,0);
    VL_OUT8(io_read_2_bits,7,0);
    VL_IN8(io_read_3_ready,0,0);
    VL_OUT8(io_read_3_valid,0,0);
    VL_OUT8(io_read_3_bits,7,0);
    VL_IN8(io_write_0,7,0);
    VL_IN8(io_write_1,7,0);
    CData/*0:0*/ TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full;
    CData/*4:0*/ TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value;
    CData/*4:0*/ TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value;
    CData/*0:0*/ TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full;
    CData/*0:0*/ TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match;
    CData/*0:0*/ TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__empty;
    CData/*0:0*/ TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__unnamedblk1__DOT__do_deq;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 32> TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP___024root(VTOP__Syms* symsp, const char* v__name);
    ~VTOP___024root();
    VL_UNCOPYABLE(VTOP___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
