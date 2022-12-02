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
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[1U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[2U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[3U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[4U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[5U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[6U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[7U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[8U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[9U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0xaU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0xbU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0xcU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0xdU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0xeU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0xfU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x10U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x11U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x12U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x13U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x14U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x15U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x16U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x17U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x18U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x19U] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x1aU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x1bU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x1cU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x1dU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x1eU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[0x1fU] = 0U;
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x20U;
    VL_WRITEF("Loading rom.\n");
    VL_READMEM_N(true, 8, 16384, 0, std::string{"Lab4.mem"}
                 ,  &(vlSelf->cpu__DOT__memory__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcpu___024root___settle__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = (1U & vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
                  [0xaU]);
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
        vlSelf->cpu__DOT__ALUsrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->cpu__DOT__instr))) {
        if ((1U != (7U & (vlSelf->cpu__DOT__instr >> 0xcU)))) {
            vlSelf->cpu__DOT__ALUctrl = 0U;
            vlSelf->cpu__DOT__ALUsrc = 0U;
        }
    } else {
        vlSelf->cpu__DOT__ALUctrl = 0U;
        vlSelf->cpu__DOT__ALUsrc = 0U;
    }
    vlSelf->cpu__DOT__regwrite = (IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__instr)));
    vlSelf->cpu__DOT__alublock__DOT__ALUop1 = vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0xfU))];
    vlSelf->cpu__DOT__EQ = (vlSelf->cpu__DOT__alublock__DOT__ALUop1 
                            == vlSelf->cpu__DOT__alublock__DOT__ALUop2);
    if ((0x13U != (0x7fU & vlSelf->cpu__DOT__instr))) {
        vlSelf->cpu__DOT__PCsrc = (1U & ((0x1063U != 
                                          (0x707fU 
                                           & vlSelf->cpu__DOT__instr)) 
                                         | (~ (IData)(vlSelf->cpu__DOT__EQ))));
        vlSelf->cpu__DOT____Vcellout__controlunit__ImmSrc 
            = ((0x63U == (0x7fU & vlSelf->cpu__DOT__instr))
                ? ((1U == (7U & (vlSelf->cpu__DOT__instr 
                                 >> 0xcU))) ? (0xfffU 
                                               & ((IData)(vlSelf->cpu__DOT__EQ)
                                                   ? 
                                                  ((IData)(vlSelf->cpu__DOT__EQ)
                                                    ? 
                                                   (vlSelf->cpu__DOT__instr 
                                                    >> 0x14U)
                                                    : 0U)
                                                   : 
                                                  (vlSelf->cpu__DOT__instr 
                                                   >> 0x14U)))
                    : 0U) : 0U);
    }
    vlSelf->cpu__DOT__Immop = ((0U == (7U & (IData)(vlSelf->cpu__DOT____Vcellout__controlunit__ImmSrc)))
                                ? (((- (IData)((vlSelf->cpu__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->cpu__DOT__instr 
                                                >> 0x14U))
                                : ((1U == (7U & (IData)(vlSelf->cpu__DOT____Vcellout__controlunit__ImmSrc)))
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
    vlSelf->cpu__DOT__pc__DOT__next_PC = ((IData)(vlSelf->cpu__DOT__PCsrc)
                                           ? (vlSelf->cpu__DOT__PC 
                                              + vlSelf->cpu__DOT__Immop)
                                           : ((IData)(4U) 
                                              + vlSelf->cpu__DOT__PC));
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
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
    vlSelf->a0 = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__Immop = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT____Vcellout__controlunit__ImmSrc = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->cpu__DOT__memory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__pc__DOT__next_PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__controlunit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__alublock__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alublock__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__alublock__DOT__regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vchglast__TOP__cpu__DOT__alublock__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
