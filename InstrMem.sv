module InstrMem #(
    parameter   ADDRESS_WIDTH = 32,
                DATA_WIDTH = 32
)(
    input  logic  [ADDRESS_WIDTH-1:0]  addr,
    output logic  [DATA_WIDTH-1:0]     instr
);

logic  [7:0] rom_array [2**16-1:0];

initial begin
        $display("Loading rom.");
        $readmemh("Lab4.mem", rom_array);
end;

assign instr = {rom_array [addr+3], rom_array [addr+2], rom_array [addr+1], rom_array[addr+0]};

endmodule

