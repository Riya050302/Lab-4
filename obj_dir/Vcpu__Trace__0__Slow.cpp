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
    tracep->declBit(c+50,"clk", false,-1);
    tracep->declBit(c+51,"rst", false,-1);
    tracep->declBit(c+52,"a0", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+59,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+50,"clk", false,-1);
    tracep->declBit(c+51,"rst", false,-1);
    tracep->declBit(c+52,"a0", false,-1);
    tracep->declBus(c+53,"PC", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBit(c+44,"PCsrc", false,-1);
    tracep->declBus(c+36,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+37,"ALUsrc", false,-1);
    tracep->declBit(c+45,"EQ", false,-1);
    tracep->declBit(c+38,"regwrite", false,-1);
    tracep->declBus(c+46,"Immsrc", false,-1, 2,0);
    tracep->declBus(c+47,"Immop", false,-1, 31,0);
    tracep->declBus(c+39,"rs1", false,-1, 4,0);
    tracep->declBus(c+40,"rs2", false,-1, 4,0);
    tracep->declBus(c+41,"rd", false,-1, 4,0);
    tracep->pushNamePrefix("alublock ");
    tracep->declBus(c+60,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+50,"clk", false,-1);
    tracep->declBit(c+37,"ALUsrc", false,-1);
    tracep->declBus(c+36,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+47,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+38,"WE3", false,-1);
    tracep->declBus(c+39,"AD1", false,-1, 4,0);
    tracep->declBus(c+40,"AD2", false,-1, 4,0);
    tracep->declBus(c+41,"AD3", false,-1, 4,0);
    tracep->declBit(c+45,"EQ", false,-1);
    tracep->declBus(c+2,"a0", false,-1, 31,0);
    tracep->declBus(c+54,"regOp2", false,-1, 31,0);
    tracep->declBus(c+42,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+48,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+55,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("addralu ");
    tracep->declBus(c+42,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+48,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+36,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+55,"ALUout", false,-1, 31,0);
    tracep->declBit(c+45,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+60,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"AD1", false,-1, 4,0);
    tracep->declBus(c+40,"AD2", false,-1, 4,0);
    tracep->declBus(c+41,"AD3", false,-1, 4,0);
    tracep->declBit(c+38,"WE3", false,-1);
    tracep->declBus(c+55,"WD3", false,-1, 31,0);
    tracep->declBit(c+50,"clk", false,-1);
    tracep->declBus(c+42,"RD1", false,-1, 31,0);
    tracep->declBus(c+54,"RD2", false,-1, 31,0);
    tracep->declBus(c+2,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBit(c+45,"EQ", false,-1);
    tracep->declBit(c+38,"RegWrite", false,-1);
    tracep->declBus(c+36,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+37,"ALUsrc", false,-1);
    tracep->declBus(c+49,"ImmSrc", false,-1, 11,0);
    tracep->declBit(c+44,"PCsrc", false,-1);
    tracep->declBus(c+43,"opcode", false,-1, 6,0);
    tracep->declBus(c+61,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immext ");
    tracep->declBus(c+46,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBus(c+47,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+59,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+50,"clk", false,-1);
    tracep->declBit(c+51,"reset", false,-1);
    tracep->declBus(c+53,"addr", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+47,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+51,"rst", false,-1);
    tracep->declBit(c+44,"PCsrc", false,-1);
    tracep->declBit(c+50,"clk", false,-1);
    tracep->declBus(c+53,"PC", false,-1, 31,0);
    tracep->declBus(c+56,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+57,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+58,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+58,"next_PC", false,-1, 31,0);
    tracep->declBit(c+51,"rst", false,-1);
    tracep->declBit(c+50,"clk", false,-1);
    tracep->declBus(c+53,"PC", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
                            [0xaU]),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[31]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__instr),32);
    bufp->fullCData(oldp+36,(vlSelf->cpu__DOT__ALUctrl),3);
    bufp->fullBit(oldp+37,(vlSelf->cpu__DOT__ALUsrc));
    bufp->fullBit(oldp+38,(vlSelf->cpu__DOT__regwrite));
    bufp->fullCData(oldp+39,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+40,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->cpu__DOT__instr 
                                       >> 5U))),5);
    bufp->fullIData(oldp+42,(vlSelf->cpu__DOT__alublock__DOT__ALUop1),32);
    bufp->fullCData(oldp+43,((0x7fU & vlSelf->cpu__DOT__instr)),7);
    bufp->fullBit(oldp+44,(vlSelf->cpu__DOT__PCsrc));
    bufp->fullBit(oldp+45,(vlSelf->cpu__DOT__EQ));
    bufp->fullCData(oldp+46,((7U & (IData)(vlSelf->cpu__DOT____Vcellout__controlunit__ImmSrc))),3);
    bufp->fullIData(oldp+47,(vlSelf->cpu__DOT__Immop),32);
    bufp->fullIData(oldp+48,(vlSelf->cpu__DOT__alublock__DOT__ALUop2),32);
    bufp->fullSData(oldp+49,(vlSelf->cpu__DOT____Vcellout__controlunit__ImmSrc),12);
    bufp->fullBit(oldp+50,(vlSelf->clk));
    bufp->fullBit(oldp+51,(vlSelf->rst));
    bufp->fullBit(oldp+52,(vlSelf->a0));
    bufp->fullIData(oldp+53,(vlSelf->cpu__DOT__PC),32);
    bufp->fullIData(oldp+54,(vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
                             [(0x1fU & (vlSelf->cpu__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+55,(((4U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                               ? ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                   ? ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                       ? 0U : 0U) : 0U)
                               : ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                   ? 0U : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                            ? 0U : 
                                           (vlSelf->cpu__DOT__alublock__DOT__ALUop1 
                                            + vlSelf->cpu__DOT__alublock__DOT__ALUop2))))),32);
    bufp->fullIData(oldp+56,(((IData)(4U) + vlSelf->cpu__DOT__PC)),32);
    bufp->fullIData(oldp+57,((vlSelf->cpu__DOT__PC 
                              + vlSelf->cpu__DOT__Immop)),32);
    bufp->fullIData(oldp+58,(((IData)(vlSelf->cpu__DOT__PCsrc)
                               ? (vlSelf->cpu__DOT__PC 
                                  + vlSelf->cpu__DOT__Immop)
                               : ((IData)(4U) + vlSelf->cpu__DOT__PC))),32);
    bufp->fullIData(oldp+59,(0x20U),32);
    bufp->fullIData(oldp+60,(5U),32);
    bufp->fullCData(oldp+61,(vlSelf->cpu__DOT__controlunit__DOT__funct3),3);
}
