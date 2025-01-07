// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRAM_32X8__SYMS_H_
#define VERILATED_VRAM_32X8__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vram_32x8.h"

// INCLUDE MODULE CLASSES
#include "Vram_32x8___024root.h"

// SYMS CLASS (contains all model state)
class Vram_32x8__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vram_32x8* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vram_32x8___024root            TOP;

    // CONSTRUCTORS
    Vram_32x8__Syms(VerilatedContext* contextp, const char* namep, Vram_32x8* modelp);
    ~Vram_32x8__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
