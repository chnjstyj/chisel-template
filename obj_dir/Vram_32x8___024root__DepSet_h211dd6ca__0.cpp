// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram_32x8.h for the primary calling header

#include "verilated.h"

#include "Vram_32x8___024root.h"

void Vram_32x8___024root___eval_act(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vram_32x8___024root___nba_sequent__TOP__0(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match;
    TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match = 0;
    CData/*4:0*/ __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value;
    __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value;
    __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdlyvdim0__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0 = 0;
    // Body
    __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value 
        = vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value;
    __Vdlyvset__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value 
        = vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value;
    if (vlSelf->reset) {
        __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value = 0U;
        __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value = 0U;
        vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full)))) {
            __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value)));
        }
        vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelf->io_read_3_ready) & (~ (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__empty)));
        if (vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value)));
        }
        if (((1U & (~ (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full))) 
             != (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full 
                = (1U & (~ (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full)))) {
        __Vdlyvval__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->io_write_1;
        __Vdlyvset__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value;
    }
    if (__Vdlyvset__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value 
        = __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value;
    vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value 
        = __Vdly__TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value;
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

void Vram_32x8___024root___eval_nba(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vram_32x8___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vram_32x8___024root___eval_triggers__act(Vram_32x8___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vram_32x8___024root___dump_triggers__act(Vram_32x8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vram_32x8___024root___dump_triggers__nba(Vram_32x8___024root* vlSelf);
#endif  // VL_DEBUG

void Vram_32x8___024root___eval(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vram_32x8___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vram_32x8___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/TOP.sv", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vram_32x8___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vram_32x8___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/TOP.sv", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vram_32x8___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vram_32x8___024root___eval_debug_assertions(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_read_0_ready & 0xfeU))) {
        Verilated::overWidthError("io_read_0_ready");}
    if (VL_UNLIKELY((vlSelf->io_read_1_ready & 0xfeU))) {
        Verilated::overWidthError("io_read_1_ready");}
    if (VL_UNLIKELY((vlSelf->io_read_2_ready & 0xfeU))) {
        Verilated::overWidthError("io_read_2_ready");}
    if (VL_UNLIKELY((vlSelf->io_read_3_ready & 0xfeU))) {
        Verilated::overWidthError("io_read_3_ready");}
}
#endif  // VL_DEBUG
