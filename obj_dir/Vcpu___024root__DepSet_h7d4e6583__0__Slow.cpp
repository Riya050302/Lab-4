// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___initial__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Loading rom.\n");
    VL_READMEM_N(true, 8, 65536, 0, std::string{"Lab4.mem"}
                 ,  &(vlSelf->cpu__DOT__memory__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcpu___024root___settle__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
        [0xaU];
    vlSelf->cpu__DOT__instr = ((vlSelf->cpu__DOT__memory__DOT__rom_array
                                [(0xffffU & ((IData)(3U) 
                                             + vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg))] 
                                << 0x18U) | ((vlSelf->cpu__DOT__memory__DOT__rom_array
                                              [(0xffffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__memory__DOT__rom_array
                                                [(0xffffU 
                                                  & vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg)])));
    vlSelf->cpu__DOT__alublock__DOT__ALUop1 = vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0xfU))];
    vlSelf->cpu__DOT__EQ = (vlSelf->cpu__DOT__alublock__DOT__ALUop1 
                            == vlSelf->cpu__DOT__alublock__DOT__ALUop2);
    if ((IData)((0x13U == (0x707fU & vlSelf->cpu__DOT__instr)))) {
        vlSelf->cpu__DOT__ALUctrl = 0U;
        vlSelf->cpu__DOT__regwrite = 1U;
        vlSelf->cpu__DOT__ALUsrc = 0U;
    } else if (((IData)((0x13U == (0x707fU & vlSelf->cpu__DOT__instr))) 
                & (~ (IData)(vlSelf->cpu__DOT__EQ)))) {
        vlSelf->cpu__DOT__ALUctrl = 0U;
        vlSelf->cpu__DOT__regwrite = 1U;
        vlSelf->cpu__DOT__ALUsrc = 1U;
    } else if (((IData)((0x1063U == (0x707fU & vlSelf->cpu__DOT__instr))) 
                & (~ (IData)(vlSelf->cpu__DOT__EQ)))) {
        vlSelf->cpu__DOT__regwrite = 0U;
    }
    if ((1U & (~ (IData)((0x13U == (0x707fU & vlSelf->cpu__DOT__instr)))))) {
        if ((1U & (~ ((IData)((0x13U == (0x707fU & vlSelf->cpu__DOT__instr))) 
                      & (~ (IData)(vlSelf->cpu__DOT__EQ)))))) {
            if (((IData)((0x1063U == (0x707fU & vlSelf->cpu__DOT__instr))) 
                 & (~ (IData)(vlSelf->cpu__DOT__EQ)))) {
                vlSelf->cpu__DOT__PCsrc = (1U & (~ (IData)(vlSelf->cpu__DOT__EQ)));
            }
        }
        if (((IData)((0x13U == (0x707fU & vlSelf->cpu__DOT__instr))) 
             & (~ (IData)(vlSelf->cpu__DOT__EQ)))) {
            vlSelf->cpu__DOT__Immsrc = (vlSelf->cpu__DOT__instr 
                                        >> 0x14U);
        } else if (((IData)((0x1063U == (0x707fU & vlSelf->cpu__DOT__instr))) 
                    & (~ (IData)(vlSelf->cpu__DOT__EQ)))) {
            vlSelf->cpu__DOT__Immsrc = (vlSelf->cpu__DOT__instr 
                                        >> 0x14U);
        }
    }
    if ((0x13U == (0x7fU & vlSelf->cpu__DOT__instr))) {
        vlSelf->cpu__DOT__Immop = (((- (IData)((1U 
                                                & ((IData)(vlSelf->cpu__DOT__Immsrc) 
                                                   >> 0xbU)))) 
                                    << 0x18U) | (((IData)(vlSelf->cpu__DOT__Immsrc) 
                                                  << 0xcU) 
                                                 | (0xfffU 
                                                    & vlSelf->cpu__DOT__instr)));
    } else if ((0x63U == (0x7fU & vlSelf->cpu__DOT__instr))) {
        vlSelf->cpu__DOT__Immop = ((0x80000000U & ((IData)(vlSelf->cpu__DOT__Immsrc) 
                                                   << 0x14U)) 
                                   | ((0x7e000000U 
                                       & ((IData)(vlSelf->cpu__DOT__Immsrc) 
                                          << 0x15U)) 
                                      | ((0x1fff000U 
                                          & vlSelf->cpu__DOT__instr) 
                                         | ((0xf00U 
                                             & ((IData)(vlSelf->cpu__DOT__Immsrc) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->cpu__DOT__Immsrc) 
                                                   >> 3U)) 
                                               | (0x7fU 
                                                  & vlSelf->cpu__DOT__instr))))));
    }
    vlSelf->cpu__DOT__alublock__DOT__ALUop2 = ((IData)(vlSelf->cpu__DOT__ALUsrc)
                                                ? vlSelf->cpu__DOT__Immop
                                                : vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
                                               [(0x1fU 
                                                 & (vlSelf->cpu__DOT__instr 
                                                    >> 0x14U))]);
    vlSelf->cpu__DOT__pc__DOT__next_PC = ((IData)(vlSelf->cpu__DOT__PCsrc)
                                           ? (vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg 
                                              + vlSelf->cpu__DOT__Immop)
                                           : ((IData)(4U) 
                                              + vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg));
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__Immsrc = VL_RAND_RESET_I(12);
    vlSelf->cpu__DOT__Immop = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->cpu__DOT__memory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__pc__DOT__next_PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc__DOT__PC_Reg__DOT__sreg = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alublock__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alublock__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vchglast__TOP__cpu__DOT__alublock__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
