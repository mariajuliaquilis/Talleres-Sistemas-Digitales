module shifter_4b (
    input logic [3:0] dato,
    input logic aritmetico,
    output logic [3:0] resultado,
    output logic negativo, zero
);
  // COMPLETAR: desplazar dato una posición a derecha según aritmetico.
  // Reutilizar negativo_4b y zero_4b sobre resultado.
  // En modo lógico, ambos flags deben valer 0.

  assign resultado[2:0] = dato[3:1];
  assign resultado[3] = aritmetico ? resultado[2]: 1'b0;

  logic negativo_aux, zero_aux;

  negativo_4b neg_4b (
    .dato    (resultado),
    .negativo(negativo_aux)
  );

  zero_4b cero_4b (
    .dato(resultado),
    .zero(zero_aux)
  ); 

  assign negativo = aritmetico ? negativo_aux : 1'b0;
  assign zero = aritmetico ? zero_aux : 1'b0;

endmodule
