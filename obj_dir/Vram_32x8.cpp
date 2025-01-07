// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vram_32x8.h"
#include "Vram_32x8__Syms.h"

//============================================================
// Constructors

Vram_32x8::Vram_32x8(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vram_32x8__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_read_0_ready{vlSymsp->TOP.io_read_0_ready}
    , io_read_0_valid{vlSymsp->TOP.io_read_0_valid}
    , io_read_0_bits{vlSymsp->TOP.io_read_0_bits}
    , io_read_1_ready{vlSymsp->TOP.io_read_1_ready}
    , io_read_1_valid{vlSymsp->TOP.io_read_1_valid}
    , io_read_1_bits{vlSymsp->TOP.io_read_1_bits}
    , io_read_2_ready{vlSymsp->TOP.io_read_2_ready}
    , io_read_2_valid{vlSymsp->TOP.io_read_2_valid}
    , io_read_2_bits{vlSymsp->TOP.io_read_2_bits}
    , io_read_3_ready{vlSymsp->TOP.io_read_3_ready}
    , io_read_3_valid{vlSymsp->TOP.io_read_3_valid}
    , io_read_3_bits{vlSymsp->TOP.io_read_3_bits}
    , io_write_0{vlSymsp->TOP.io_write_0}
    , io_write_1{vlSymsp->TOP.io_write_1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vram_32x8::Vram_32x8(const char* _vcname__)
    : Vram_32x8(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vram_32x8::~Vram_32x8() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vram_32x8___024root___eval_debug_assertions(Vram_32x8___024root* vlSelf);
#endif  // VL_DEBUG
void Vram_32x8___024root___eval_static(Vram_32x8___024root* vlSelf);
void Vram_32x8___024root___eval_initial(Vram_32x8___024root* vlSelf);
void Vram_32x8___024root___eval_settle(Vram_32x8___024root* vlSelf);
void Vram_32x8___024root___eval(Vram_32x8___024root* vlSelf);

void Vram_32x8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vram_32x8::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vram_32x8___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vram_32x8___024root___eval_static(&(vlSymsp->TOP));
        Vram_32x8___024root___eval_initial(&(vlSymsp->TOP));
        Vram_32x8___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vram_32x8___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vram_32x8::eventsPending() { return false; }

uint64_t Vram_32x8::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vram_32x8::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vram_32x8___024root___eval_final(Vram_32x8___024root* vlSelf);

VL_ATTR_COLD void Vram_32x8::final() {
    Vram_32x8___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vram_32x8::hierName() const { return vlSymsp->name(); }
const char* Vram_32x8::modelName() const { return "Vram_32x8"; }
unsigned Vram_32x8::threads() const { return 1; }
