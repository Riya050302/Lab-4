// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->cpu__DOT__pc__DOT__next_PC);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__alublock__DOT__regfile__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__alublock__DOT__regfile__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alublock__DOT__regfile__DOT__reg_array__v0;
    // Body
    __Vdlyvset__cpu__DOT__alublock__DOT__regfile__DOT__reg_array__v0 = 0U;
    if (vlSelf->cpu__DOT__regwrite) {
        __Vdlyvval__cpu__DOT__alublock__DOT__regfile__DOT__reg_array__v0 
            = ((4U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                ? ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                    ? ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                        ? 0U : 0U) : 0U) : ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                              ? 0U : 
                                             (vlSelf->cpu__DOT__alublock__DOT__ALUop1 
                                              + vlSelf->cpu__DOT__alublock__DOT__ALUop2))));
        __Vdlyvset__cpu__DOT__alublock__DOT__regfile__DOT__reg_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__alublock__DOT__regfile__DOT__reg_array__v0 
            = (0x1fU & (vlSelf->cpu__DOT__instr >> 7U));
    }
    if (__Vdlyvset__cpu__DOT__alublock__DOT__regfile__DOT__reg_array__v0) {
        vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[__Vdlyvdim0__cpu__DOT__alublock__DOT__regfile__DOT__reg_array__v0] 
            = __Vdlyvval__cpu__DOT__alublock__DOT__regfile__DOT__reg_array__v0;
    }
    vlSelf->a0 = vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
        [0xaU];
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__2(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->cpu__DOT__instr = ((vlSelf->cpu__DOT__memory__DOT__rom_array
                                [(0x3fffU & vlSelf->cpu__DOT__PC)] 
                                << 0x18U) | ((vlSelf->cpu__DOT__memory__DOT__rom_array
                                              [(0x3fffU 
                                                & ((IData)(1U) 
                                                   + vlSelf->cpu__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__memory__DOT__rom_array
                                                 [(0x3fffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->cpu__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__memory__DOT__rom_array
                                                [(0x3fffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->cpu__DOT__PC))])));
    if ((0x13U == (0x7fU & vlSelf->cpu__DOT__instr))) {
        vlSelf->cpu__DOT__ALUctrl = 0U;
        vlSelf->cpu__DOT__regwrite = (0U == (7U & (vlSelf->cpu__DOT__instr 
                                                   >> 0xcU)));
        vlSelf->cpu__DOT__ALUsrc = (0U == (7U & (vlSelf->cpu__DOT__instr 
                                                 >> 0xcU)));
        vlSelf->cpu__DOT__Immsrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->cpu__DOT__instr))) {
        vlSelf->cpu__DOT__ALUctrl = 0U;
        vlSelf->cpu__DOT__regwrite = 0U;
        vlSelf->cpu__DOT__ALUsrc = 0U;
        vlSelf->cpu__DOT__Immsrc = 1U;
        if ((1U != (7U & (vlSelf->cpu__DOT__instr >> 0xcU)))) {
            vlSelf->cpu__DOT__ALUctrl = 0U;
            vlSelf->cpu__DOT__regwrite = 0U;
            vlSelf->cpu__DOT__ALUsrc = 0U;
            vlSelf->cpu__DOT__Immsrc = 0U;
        }
    } else {
        vlSelf->cpu__DOT__ALUctrl = 0U;
        vlSelf->cpu__DOT__regwrite = 0U;
        vlSelf->cpu__DOT__ALUsrc = 0U;
        vlSelf->cpu__DOT__Immsrc = 0U;
    }
    vlSelf->cpu__DOT__alublock__DOT__ALUop1 = vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0xfU))];
    vlSelf->cpu__DOT__Immop = ((0U == (IData)(vlSelf->cpu__DOT__Immsrc))
                                ? (((- (IData)((vlSelf->cpu__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->cpu__DOT__instr 
                                                >> 0x14U))
                                : ((1U == (IData)(vlSelf->cpu__DOT__Immsrc))
                                    ? (((- (IData)(
                                                   (vlSelf->cpu__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->cpu__DOT__instr 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->cpu__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->cpu__DOT__instr 
                                                 >> 7U)))))
                                    : 0U));
    vlSelf->cpu__DOT__alublock__DOT__ALUop2 = ((IData)(vlSelf->cpu__DOT__ALUsrc)
                                                ? vlSelf->cpu__DOT__Immop
                                                : vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
                                               [(0x1fU 
                                                 & (vlSelf->cpu__DOT__instr 
                                                    >> 0x14U))]);
    vlSelf->cpu__DOT__EQ = (vlSelf->cpu__DOT__alublock__DOT__ALUop1 
                            == vlSelf->cpu__DOT__alublock__DOT__ALUop2);
    vlSelf->cpu__DOT__pc__DOT__next_PC = ((IData)((
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->cpu__DOT__instr)) 
                                                    & (~ (IData)(vlSelf->cpu__DOT__EQ))) 
                                                   & (0x13U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->cpu__DOT__instr))))
                                           ? (vlSelf->cpu__DOT__PC 
                                              + vlSelf->cpu__DOT__Immop)
                                           : ((IData)(4U) 
                                              + vlSelf->cpu__DOT__PC));
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcpu___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
