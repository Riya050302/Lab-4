module alu_(
    input   logic [31:0]      ALUop1, 
    input logic [31:0] ALUop2,
    input   logic [2:0]            ALUctrl,
    output  logic [31:0]       ALUout,
    output  logic               EQ

);

assign      EQ = (ALUop1 == ALUop2);

always_comb 
    case (ALUctrl)
    3'b000:     ALUout = ALUop1 + ALUop2;
    3'b001:     ALUout = ALUop1 - ALUop2;
    3'b010:     ALUout = ALUop1 & ALUop2;
    3'b011:     ALUout = ALUop1 | ALUop2;
    default:    ALUout = 0;
    endcase
    

endmodule

