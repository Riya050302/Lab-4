// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__instr),32);
        bufp->chgSData(oldp+1,((0x1fU & (vlSelf->cpu__DOT__instr 
                                         >> 0xfU))),16);
        bufp->chgSData(oldp+2,((0x1fU & (vlSelf->cpu__DOT__instr 
                                         >> 0x14U))),16);
        bufp->chgSData(oldp+3,((0x1fU & (vlSelf->cpu__DOT__instr 
                                         >> 7U))),16);
        bufp->chgIData(oldp+4,(vlSelf->cpu__DOT__alublock__DOT__ALUop1),32);
        bufp->chgCData(oldp+5,((0x7fU & vlSelf->cpu__DOT__instr)),7);
        bufp->chgCData(oldp+6,((7U & (vlSelf->cpu__DOT__instr 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->cpu__DOT__instr 
                                         >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+8,(vlSelf->cpu__DOT__PCsrc));
        bufp->chgCData(oldp+9,(vlSelf->cpu__DOT__ALUctrl),3);
        bufp->chgBit(oldp+10,(vlSelf->cpu__DOT__ALUsrc));
        bufp->chgBit(oldp+11,(vlSelf->cpu__DOT__EQ));
        bufp->chgBit(oldp+12,(vlSelf->cpu__DOT__regwrite));
        bufp->chgSData(oldp+13,(vlSelf->cpu__DOT__Immsrc),12);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__Immop),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu__DOT__alublock__DOT__ALUop2),32);
        bufp->chgIData(oldp+16,(((0xff000U & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->cpu__DOT__Immsrc) 
                                                             >> 0xbU)))) 
                                              << 0xcU)) 
                                 | (IData)(vlSelf->cpu__DOT__Immsrc))),20);
    }
    bufp->chgBit(oldp+17,(vlSelf->clk));
    bufp->chgBit(oldp+18,(vlSelf->rst));
    bufp->chgIData(oldp+19,(vlSelf->a0),32);
    bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg),32);
    bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
                            [(0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 0x14U))]),32);
    bufp->chgIData(oldp+22,(((4U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                              ? 0U : ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                       ? ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                           ? (vlSelf->cpu__DOT__alublock__DOT__ALUop1 
                                              | vlSelf->cpu__DOT__alublock__DOT__ALUop2)
                                           : (vlSelf->cpu__DOT__alublock__DOT__ALUop1 
                                              & vlSelf->cpu__DOT__alublock__DOT__ALUop2))
                                       : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                           ? (vlSelf->cpu__DOT__alublock__DOT__ALUop1 
                                              - vlSelf->cpu__DOT__alublock__DOT__ALUop2)
                                           : (vlSelf->cpu__DOT__alublock__DOT__ALUop1 
                                              + vlSelf->cpu__DOT__alublock__DOT__ALUop2))))),32);
    bufp->chgIData(oldp+23,(((IData)(vlSelf->cpu__DOT__PCsrc)
                              ? (vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg 
                                 + vlSelf->cpu__DOT__Immop)
                              : ((IData)(4U) + vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg))),32);
    bufp->chgIData(oldp+24,((vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg 
                             + vlSelf->cpu__DOT__Immop)),32);
    bufp->chgIData(oldp+25,(((IData)(4U) + vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg)),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
