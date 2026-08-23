module sumador_completo (
    input  logic a,
    input  logic b,
    input  logic cin,
    output logic sum,
    output logic cout
);
  logic d1, c1, c2;
  
  sumador_simple sumador1 ( //Llamo sumador1 a esta copia del módulo sumador_simple
    .a(a), //Al input a de sumador1, le conecto el primer input de sumador_completo (a)
    .b(b), //Al input b de sumador1, le conecto el segundo input de sumador_completo (b)
    .sum(d1), //Al output sum de sumador1, le conecto d1 (cableo sum a d1)
    .cout(c1) //Al output cout de sumador1, le conecto c1 (cableo cout a c1)
  );

  sumador_simple sumador2 ( //Llamo sumador2 a esta segunda copia del módulo sumador_simple
    .a(d1), //Al input a de sumador2, le conecto d1, que contiene la suma parcial entre a y b.
    .b(cin), //Al input b de sumador2, le conecto el tercer input de sumador_completo (cin)
    .sum(sum), //Al output sum de sumador2, lo conecto a la salida sum (salida sum de sumador_completo)
    .cout(c2) //Al output cout de sumador2, le conecto c2 (cableo cout a c2)
  );

  assign cout = c1 | c2; //A la salida cout de sumador_completo le asigno el valor entre c1 o c2

endmodule
