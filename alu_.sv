module alu_(
    input   logic [31:0]      ALUop1, ALUop2,
    input   logic [2:0]            ALUctrl,
    output  logic [31:0]       ALUout,
    output  logic               EQ

);
always_comb 
    case (ALUctrl)
    3b'000:     ALUout = ALUop1 + ALUop2;
    3b'001:     ALUout = ALUop1 - ALUop2;
    3b'010:     ALUout = ALUop1 & ALUop2;
    3b'011:     ALUout = ALUop1 | ALUop2;
    default:    ALUout = 0;
    endcase
    assign      EQ = ALUop1 == ALUop2 ? 1:0;

endmodule