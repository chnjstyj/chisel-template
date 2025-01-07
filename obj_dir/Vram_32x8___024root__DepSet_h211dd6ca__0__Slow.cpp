// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram_32x8.h for the primary calling header

#include "verilated.h"

#include "Vram_32x8___024root.h"

VL_ATTR_COLD void Vram_32x8___024root___eval_static(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vram_32x8___024root___eval_initial(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vram_32x8___024root___eval_final(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vram_32x8___024root___eval_triggers__stl(Vram_32x8___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vram_32x8___024root___dump_triggers__stl(Vram_32x8___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vram_32x8___024root___eval_stl(Vram_32x8___024root* vlSelf);

VL_ATTR_COLD void Vram_32x8___024root___eval_settle(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vram_32x8___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vram_32x8___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/TOP.sv", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vram_32x8___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vram_32x8___024root___dump_triggers__stl(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vram_32x8___024root___stl_sequent__TOP__0(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match;
    TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match = 0;
    // Body
    vlSelf->io_read_0_bits = vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory
        [vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value];
    TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match 
        = ((IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value) 
           == (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value));
    vlSelf->io_read_1_bits = vlSelf->io_read_0_bits;
    vlSelf->io_read_2_bits = vlSelf->io_read_0_bits;
    vlSelf->io_read_3_bits = vlSelf->io_read_0_bits;
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full 
        = ((IData)(TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match) 
           & (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full));
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__empty 
        = ((~ (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full)) 
           & (IData)(TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match));
    vlSelf->io_read_0_valid = (1U & (~ (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__empty)));
    vlSelf->io_read_1_valid = vlSelf->io_read_0_valid;
    vlSelf->io_read_2_valid = vlSelf->io_read_0_valid;
    vlSelf->io_read_3_valid = vlSelf->io_read_0_valid;
}

VL_ATTR_COLD void Vram_32x8___024root___eval_stl(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vram_32x8___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vram_32x8___024root___dump_triggers__act(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vram_32x8___024root___dump_triggers__nba(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vram_32x8___024root___ctor_var_reset(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_read_0_ready = VL_RAND_RESET_I(1);
    vlSelf->io_read_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_read_0_bits = VL_RAND_RESET_I(8);
    vlSelf->io_read_1_ready = VL_RAND_RESET_I(1);
    vlSelf->io_read_1_valid = VL_RAND_RESET_I(1);
    vlSelf->io_read_1_bits = VL_RAND_RESET_I(8);
    vlSelf->io_read_2_ready = VL_RAND_RESET_I(1);
    vlSelf->io_read_2_valid = VL_RAND_RESET_I(1);
    vlSelf->io_read_2_bits = VL_RAND_RESET_I(8);
    vlSelf->io_read_3_ready = VL_RAND_RESET_I(1);
    vlSelf->io_read_3_valid = VL_RAND_RESET_I(1);
    vlSelf->io_read_3_bits = VL_RAND_RESET_I(8);
    vlSelf->io_write_0 = VL_RAND_RESET_I(8);
    vlSelf->io_write_1 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__unnamedblk1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
}
