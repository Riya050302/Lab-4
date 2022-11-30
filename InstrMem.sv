module InstrMem #(
    parameter   ADDRESS_WIDTH = 20,
                DATA_WIDTH = 8
)(
    input  logic  [ADDRESS_WIDTH-1:0]  addr,
    output logic  [31:0]     instr
);

logic  [7:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
        $display("Loading rom.");
        $readmemh("Lab4.mem", rom_array);
        $display("Program written to ROM successfully");
end;

always_comb begin
    instr = {{rom_array [addr]}, {rom_array [addr+1]}, {rom_array [addr+2]}, {rom_array[addr+3]}};
end 
endmodule

