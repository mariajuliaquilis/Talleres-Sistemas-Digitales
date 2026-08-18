// Taller 0 · Ejercicio 3
// Interpretar el circuito del enunciado e implementarlo.

module circuito_ej3 (
    input  logic a,
    input  logic b,
    output logic y
);

  //Declaro dos señales internas
  logic p, q;
  //Completo las asignaciones
  assign p = ~a & b;
  assign q = a & ~b;
  assign y = p | q;

endmodule

/*
//Sí, se puede reescribir la fórmula usando XOR.
module circuito_ej3(
    input logic a,
    input logic b,
    output logic y
);
  assign y = a ^ b;

endmodule

*/