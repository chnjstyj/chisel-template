// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTOP__Syms.h"
#include "VTOP.h"
#include "VTOP___024root.h"

void VTOP__Syms::__Vserialize(VerilatedSerialize& os) {
    // Internal state
    os<<__Vm_activity;
    os << __Vm_didInit;
    // Module instance state
    TOP.__Vserialize(os);
}
void VTOP__Syms::__Vdeserialize(VerilatedDeserialize& os) {
    // Internal state
    os>>__Vm_activity;
    os >> __Vm_didInit;
    // Module instance state
    TOP.__Vdeserialize(os);
}

// FUNCTIONS
VTOP__Syms::~VTOP__Syms()
{
}

VTOP__Syms::VTOP__Syms(VerilatedContext* contextp, const char* namep, VTOP* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
