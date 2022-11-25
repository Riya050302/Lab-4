// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+19,"rst", false,-1);
    tracep->declBus(c+20,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+27,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+19,"rst", false,-1);
    tracep->declBus(c+20,"a0", false,-1, 31,0);
    tracep->declBus(c+21,"PC", false,-1, 31,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBit(c+9,"PCsrc", false,-1);
    tracep->declBus(c+10,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+11,"ALUsrc", false,-1);
    tracep->declBit(c+12,"EQ", false,-1);
    tracep->declBit(c+13,"regwrite", false,-1);
    tracep->declBus(c+14,"Immsrc", false,-1, 11,0);
    tracep->declBus(c+15,"Immop", false,-1, 31,0);
    tracep->declBus(c+2,"rs1", false,-1, 15,0);
    tracep->declBus(c+3,"rs2", false,-1, 15,0);
    tracep->declBus(c+4,"rd", false,-1, 15,0);
    tracep->pushNamePrefix("alublock ");
    tracep->declBus(c+27,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+11,"ALUsrc", false,-1);
    tracep->declBus(c+10,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+15,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+13,"WE3", false,-1);
    tracep->declBus(c+2,"AD1", false,-1, 15,0);
    tracep->declBus(c+3,"AD2", false,-1, 15,0);
    tracep->declBus(c+4,"AD3", false,-1, 15,0);
    tracep->declBit(c+12,"EQ", false,-1);
    tracep->declBus(c+20,"a0", false,-1, 31,0);
    tracep->declBus(c+22,"regOp2", false,-1, 31,0);
    tracep->declBus(c+5,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+16,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+23,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("addralu ");
    tracep->declBus(c+5,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+16,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+10,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+23,"ALUout", false,-1, 31,0);
    tracep->declBit(c+12,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+27,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"AD1", false,-1, 15,0);
    tracep->declBus(c+3,"AD2", false,-1, 15,0);
    tracep->declBus(c+4,"AD3", false,-1, 15,0);
    tracep->declBit(c+13,"WE3", false,-1);
    tracep->declBus(c+23,"WD3", false,-1, 31,0);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBus(c+5,"RD1", false,-1, 31,0);
    tracep->declBus(c+22,"RD2", false,-1, 31,0);
    tracep->declBus(c+20,"a0", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBus(c+28,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBit(c+12,"EQ", false,-1);
    tracep->declBit(c+13,"RegWrite", false,-1);
    tracep->declBus(c+10,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+11,"ALUsrc", false,-1);
    tracep->declBus(c+14,"ImmSrc", false,-1, 11,0);
    tracep->declBit(c+9,"PCsrc", false,-1);
    tracep->declBus(c+6,"opcode", false,-1, 6,0);
    tracep->declBus(c+7,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immext ");
    tracep->declBus(c+14,"ImmSrc", false,-1, 11,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+15,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+8,"rd", false,-1, 4,0);
    tracep->declBus(c+6,"opcode", false,-1, 6,0);
    tracep->declBus(c+17,"imm", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+28,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+21,"addr", false,-1, 31,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+15,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+19,"rst", false,-1);
    tracep->declBit(c+9,"PCsrc", false,-1);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBus(c+21,"PC", false,-1, 31,0);
    tracep->declBus(c+24,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("Countermux ");
    tracep->declBus(c+21,"PC", false,-1, 31,0);
    tracep->declBus(c+15,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+9,"PCsrc", false,-1);
    tracep->declBus(c+24,"next_PC", false,-1, 31,0);
    tracep->declBus(c+25,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+26,"inc_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+24,"next_PC", false,-1, 31,0);
    tracep->declBit(c+19,"rst", false,-1);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBus(c+21,"PC", false,-1, 31,0);
    tracep->declBus(c+21,"sreg", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__instr),32);
    bufp->fullSData(oldp+2,((0x1fU & (vlSelf->cpu__DOT__instr 
                                      >> 0xfU))),16);
    bufp->fullSData(oldp+3,((0x1fU & (vlSelf->cpu__DOT__instr 
                                      >> 0x14U))),16);
    bufp->fullSData(oldp+4,((0x1fU & (vlSelf->cpu__DOT__instr 
                                      >> 7U))),16);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__alublock__DOT__ALUop1),32);
    bufp->fullCData(oldp+6,((0x7fU & vlSelf->cpu__DOT__instr)),7);
    bufp->fullCData(oldp+7,((7U & (vlSelf->cpu__DOT__instr 
                                   >> 0xcU))),3);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->cpu__DOT__instr 
                                      >> 7U))),5);
    bufp->fullBit(oldp+9,(vlSelf->cpu__DOT__PCsrc));
    bufp->fullCData(oldp+10,(vlSelf->cpu__DOT__ALUctrl),3);
    bufp->fullBit(oldp+11,(vlSelf->cpu__DOT__ALUsrc));
    bufp->fullBit(oldp+12,(vlSelf->cpu__DOT__EQ));
    bufp->fullBit(oldp+13,(vlSelf->cpu__DOT__regwrite));
    bufp->fullSData(oldp+14,(vlSelf->cpu__DOT__Immsrc),12);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__Immop),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__alublock__DOT__ALUop2),32);
    bufp->fullIData(oldp+17,(((0xff000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->cpu__DOT__Immsrc) 
                                                          >> 0xbU)))) 
                                           << 0xcU)) 
                              | (IData)(vlSelf->cpu__DOT__Immsrc))),20);
    bufp->fullBit(oldp+18,(vlSelf->clk));
    bufp->fullBit(oldp+19,(vlSelf->rst));
    bufp->fullIData(oldp+20,(vlSelf->a0),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
                             [(0x1fU & (vlSelf->cpu__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+23,(((4U & (IData)(vlSelf->cpu__DOT__ALUctrl))
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
    bufp->fullIData(oldp+24,(((IData)(vlSelf->cpu__DOT__PCsrc)
                               ? (vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg 
                                  + vlSelf->cpu__DOT__Immop)
                               : ((IData)(4U) + vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg))),32);
    bufp->fullIData(oldp+25,((vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg 
                              + vlSelf->cpu__DOT__Immop)),32);
    bufp->fullIData(oldp+26,(((IData)(4U) + vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg)),32);
    bufp->fullIData(oldp+27,(0x10U),32);
    bufp->fullIData(oldp+28,(0x20U),32);
}
