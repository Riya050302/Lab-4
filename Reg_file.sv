module Reg_file(
    input   logic       AD1,
    input   logic       AD2,
    input   logic       AD3,
    input   logic       WE3,
    input   logic       WD3,
    input   logic       clk,
    output  logic       RD1,
    output  logic       RD2,
    output  logic       a0

);


    always_ff @ (posedge clk) 
        if (WE3 == 1'b1)
            rom_array[AD3] <= WD3;

    assign a0 = rom_array[5b'01010];

    always_comb 
        begin
            RD1 <= rom_array[AD1]
            RD2 <= rom_array[AD2]
        end
endmodule
