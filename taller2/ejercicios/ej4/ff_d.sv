module ff_d (
    input  logic clk,
    input  logic rst,
    input  logic d,
    output logic q
);
  // completar: always_ff @(posedge clk)
  // prioridad: rst → q <= 0; si no, q <= d
  always_ff @(posedge clk) begin //el flanco ascendente es el posedge
    if (rst)
      q <= 0;
    else
      q <= d; //Guardo d en q al final del flanco
  end
endmodule

