// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram_32x8.h for the primary calling header

#include "verilated.h"

#include "Vram_32x8__Syms.h"
#include "Vram_32x8___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vram_32x8___024root___dump_triggers__act(Vram_32x8___024root* vlSelf);
#endif  // VL_DEBUG

void Vram_32x8___024root___eval_triggers__act(Vram_32x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram_32x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram_32x8___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vram_32x8___024root___dump_triggers__act(vlSelf);
    }
#endif
}
