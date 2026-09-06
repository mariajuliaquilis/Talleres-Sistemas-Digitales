module uupal (
    input  logic       clk,
    input  logic       rst,
    input  logic [3:0] force_in,
    input  logic       force_en,
    input  logic       we0,
    input  logic       we1,
    input  logic       we2,
    input  logic       we3,
    input  logic [1:0] src_a,
    input  logic [1:0] src_b,
    input  logic       load_op_a,
    input  logic       load_op_b,
    input  logic [1:0] op,
    output logic [3:0] r0,
    output logic [3:0] r1,
    output logic [3:0] r2,
    output logic [3:0] r3,
    output logic [3:0] operand_a,
    output logic [3:0] operand_b,
    output logic [3:0] and_value,
    output logic [3:0] or_value,
    output logic [3:0] result
);
  // Completar de manera estructural:
  // 1. mux src_a -> bus de lectura A; mux src_b -> bus de lectura B;
  logic [3:0] bus_lectura_A;
  logic [3:0] bus_lectura_B;

  always_comb begin
    case (src_a)
      2'b00: bus_lectura_A = r0;
      2'b01: bus_lectura_A = r1;
      2'b10: bus_lectura_A = r2; 
      default: bus_lectura_A = r3;
    endcase
  end

  always_comb begin
    case (src_b)
      2'b00: bus_lectura_B = r0;
      2'b01: bus_lectura_B = r1;
      2'b10: bus_lectura_B = r2; 
      default: bus_lectura_B = r3;
    endcase
  end

  // 2. registros operand_a y operand_b (load_op_a / load_op_b);
  registro_4b cargo_op_A (
    .clk(clk),
    .rst(rst),
    .we (load_op_a),
    .din(bus_lectura_A),
    .q  (operand_a)
  );

  registro_4b cargo_op_B (
    .clk(clk),
    .rst(rst),
    .we (load_op_b),
    .din(bus_lectura_B),
    .q  (operand_b)
  );  

  // 3. AND y OR de 4 bits e instancias sumador_4b y restador_4b;
  logic [3:0] add_value;
  logic [3:0] sub_value;

  compuerta_and_4b comp_and_4b (
    .a     (operand_a),
    .b     (operand_b),
    .result(and_value)
  );

  compuerta_or_4b comp_or_4b (
    .a     (operand_a),
    .b     (operand_b),
    .result(or_value)
  );

  sumador_4b s_4b (
    .a   (operand_a),
    .b   (operand_b),
    .cin (1'b0),
    .sum (add_value),
    .cout()
  );

  restador_4b r_4b (
    .a   (operand_a),
    .b   (operand_b),
    .bin (1'b0),
    .diff(sub_value),
    .bout()
  );

  // 4. mux op -> result;
  always_comb begin
    case (op)
      2'b00: result = and_value;
      2'b01: result = or_value;
      2'b10: result = add_value;
      default: result = sub_value;
    endcase
  end

  // 5. mux force_en: force_in vs result -> bus de escritura;
  logic [3:0] bus;
  assign bus = force_en ? force_in : result;

  // 6. cuatro registro_4b (r0..r3) con we0..we3.;
  registro_4b r4b_0 (
    .clk(clk),
    .rst(rst),
    .we (we0),
    .din(bus),
    .q  (r0)
  );

  registro_4b r4b_1 (
    .clk(clk),
    .rst(rst),
    .we (we1),
    .din(bus),
    .q  (r1)
  );

  registro_4b r4b_2 (
    .clk(clk),
    .rst(rst),
    .we (we2),
    .din(bus),
    .q  (r2)
  );

  registro_4b r4b_3 (
    .clk(clk),
    .rst(rst),
    .we (we3),
    .din(bus),
    .q  (r3)
  );

endmodule
