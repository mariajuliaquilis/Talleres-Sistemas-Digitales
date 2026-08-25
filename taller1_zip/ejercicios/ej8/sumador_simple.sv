module sumador_simple (
    input  logic a,
    input  logic b,
    output logic sum,
    output logic cout
);
  //Completo las asignaciones
  assign sum = a ^ b; //La tabla de verdad de la suma corresponde a la del XOR
  assign cout = a & b; //La tabla de verdad del acarreo corresponde a la del AND

endmodule
