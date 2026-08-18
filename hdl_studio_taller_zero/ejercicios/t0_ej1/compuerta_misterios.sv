// Taller 0 · Ejercicio 1
// Abrir, sintetizar y explorar.

module compuerta_misterios (
    input  logic a, //puerto de entrada a (a es de tipo lógico)
    output logic y //puerto de salida y (y es de tipo lógico)
);

  assign y = ~a; //Negamos el valor de la entrada y se lo asignamos a y

endmodule
