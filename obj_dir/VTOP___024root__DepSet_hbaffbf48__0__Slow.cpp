// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP___024root.h"

VL_ATTR_COLD void VTOP___024root___eval_static(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTOP___024root___eval_final(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_final\n"); );
}

VL_ATTR_COLD void VTOP___024root___eval_triggers__stl(VTOP___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__stl(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VTOP___024root___eval_stl(VTOP___024root* vlSelf);

VL_ATTR_COLD void VTOP___024root___eval_settle(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VTOP___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VTOP___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/TOP.sv", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VTOP___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__stl(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP___024root___stl_sequent__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_read_0_bits = vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory
        [vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value];
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match 
        = ((IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value) 
           == (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value));
    vlSelf->io_read_1_bits = vlSelf->io_read_0_bits;
    vlSelf->io_read_2_bits = vlSelf->io_read_0_bits;
    vlSelf->io_read_3_bits = vlSelf->io_read_0_bits;
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full 
        = ((IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match) 
           & (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full));
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__empty 
        = ((~ (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full)) 
           & (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match));
    vlSelf->io_read_0_valid = (1U & (~ (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__empty)));
    vlSelf->io_read_1_valid = vlSelf->io_read_0_valid;
    vlSelf->io_read_2_valid = vlSelf->io_read_0_valid;
    vlSelf->io_read_3_valid = vlSelf->io_read_0_valid;
}

VL_ATTR_COLD void VTOP___024root___eval_stl(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VTOP___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__act(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__nba(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP___024root___ctor_var_reset(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->io_read_0_ready = 0;
    vlSelf->io_read_0_valid = 0;
    vlSelf->io_read_0_bits = 0;
    vlSelf->io_read_1_ready = 0;
    vlSelf->io_read_1_valid = 0;
    vlSelf->io_read_1_bits = 0;
    vlSelf->io_read_2_ready = 0;
    vlSelf->io_read_2_valid = 0;
    vlSelf->io_read_2_bits = 0;
    vlSelf->io_read_3_ready = 0;
    vlSelf->io_read_3_valid = 0;
    vlSelf->io_read_3_bits = 0;
    vlSelf->io_write_0 = 0;
    vlSelf->io_write_1 = 0;
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full = 0;
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value = 0;
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value = 0;
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full = 0;
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match = 0;
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__empty = 0;
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__unnamedblk1__DOT__do_deq = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->__Vtrigrprev__TOP__clock = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
