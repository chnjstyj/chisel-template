// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram_32x8.h for the primary calling header

#include "verilated.h"

#include "Vram_32x8__Syms.h"
#include "Vram_32x8___024root.h"

void Vram_32x8___024root___ctor_var_reset(Vram_32x8___024root* vlSelf);

Vram_32x8___024root::Vram_32x8___024root(Vram_32x8__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vram_32x8___024root___ctor_var_reset(this);
}

void Vram_32x8___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vram_32x8___024root::~Vram_32x8___024root() {
}
