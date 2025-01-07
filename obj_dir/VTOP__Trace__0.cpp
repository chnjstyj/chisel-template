// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VTOP__Syms.h"


void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTOP___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full));
        bufp->chgCData(oldp+1,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__enq_ptr_value),5);
        bufp->chgCData(oldp+2,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__deq_ptr_value),5);
        bufp->chgBit(oldp+3,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__maybe_full));
        bufp->chgBit(oldp+4,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ptr_match));
        bufp->chgBit(oldp+5,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__empty));
        bufp->chgBit(oldp+6,((1U & (~ (IData)(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__full)))));
        bufp->chgCData(oldp+7,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+8,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+9,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+10,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+11,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+12,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+13,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+14,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+15,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+16,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+17,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+18,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+19,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+20,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+21,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+22,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[15]),8);
        bufp->chgCData(oldp+23,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[16]),8);
        bufp->chgCData(oldp+24,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[17]),8);
        bufp->chgCData(oldp+25,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[18]),8);
        bufp->chgCData(oldp+26,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[19]),8);
        bufp->chgCData(oldp+27,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[20]),8);
        bufp->chgCData(oldp+28,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[21]),8);
        bufp->chgCData(oldp+29,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[22]),8);
        bufp->chgCData(oldp+30,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[23]),8);
        bufp->chgCData(oldp+31,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[24]),8);
        bufp->chgCData(oldp+32,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[25]),8);
        bufp->chgCData(oldp+33,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[26]),8);
        bufp->chgCData(oldp+34,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[27]),8);
        bufp->chgCData(oldp+35,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[28]),8);
        bufp->chgCData(oldp+36,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[29]),8);
        bufp->chgCData(oldp+37,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[30]),8);
        bufp->chgCData(oldp+38,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__ram_ext__DOT__Memory[31]),8);
        bufp->chgBit(oldp+39,(vlSelf->TOP__DOT__rat__DOT__fifo__DOT__queue__DOT__unnamedblk1__DOT__do_deq));
    }
    bufp->chgBit(oldp+40,(vlSelf->clock));
    bufp->chgBit(oldp+41,(vlSelf->reset));
    bufp->chgBit(oldp+42,(vlSelf->io_read_0_ready));
    bufp->chgBit(oldp+43,(vlSelf->io_read_0_valid));
    bufp->chgCData(oldp+44,(vlSelf->io_read_0_bits),8);
    bufp->chgBit(oldp+45,(vlSelf->io_read_1_ready));
    bufp->chgBit(oldp+46,(vlSelf->io_read_1_valid));
    bufp->chgCData(oldp+47,(vlSelf->io_read_1_bits),8);
    bufp->chgBit(oldp+48,(vlSelf->io_read_2_ready));
    bufp->chgBit(oldp+49,(vlSelf->io_read_2_valid));
    bufp->chgCData(oldp+50,(vlSelf->io_read_2_bits),8);
    bufp->chgBit(oldp+51,(vlSelf->io_read_3_ready));
    bufp->chgBit(oldp+52,(vlSelf->io_read_3_valid));
    bufp->chgCData(oldp+53,(vlSelf->io_read_3_bits),8);
    bufp->chgCData(oldp+54,(vlSelf->io_write_0),8);
    bufp->chgCData(oldp+55,(vlSelf->io_write_1),8);
}

void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_cleanup\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
