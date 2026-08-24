module sumador_4b (
    input  logic [3:0] a,
    input  logic [3:0] b,
    input  logic       cin,
    output logic [3:0] sum,
    output logic       cout
);
  logic c1, c2, c3;
  
  sumador_completo sumador_completo1 ( //Llamo sumador_completo1 a esta copia del módulo sumador_completo
    .a(a[0]), //Al input a de sumador_completo1 le conecto el bit menos significativo de la entrada a de sumador_4b (le conecto a[0])
    .b(b[0]), //Al input b de sumador_completo1 le conecto el bit menos significativo de la entrada b de sumador_4b (conecto b[0])
    .cin(cin), //Al input cin de sumador_completo1 le conecto el tercer input de sumador_4b (cin)
    .sum(sum[0]), //Al output sum de sumador_completo1, conecto sum[0] (cableo sum a sum[0])
    .cout(c1) //Al output cout de sumador_completo 1, le conecto c1 (cableo cout a c1)
  );

  sumador_completo sumador_completo2 ( //Llamo sumador_completo2 a esta segunda copia del módulo sumador_completo
    .a(a[1]), //Al input a de sumador_completo2 le conecto a[1] de sumador_4b
    .b(b[1]), //Al input b de sumador_completo2 le conecto b[1] de sumador_4b
    .cin(c1), //Al input cin de sumador_completo2 le conecto c1
    .sum(sum[1]), //Cableo sum a sum[1]
    .cout(c2) //Cableo cout a c2
  );

  sumador_completo sumador_completo3 ( //Llamo sumador_completo3 a esta tercera copia del módulo sumador_completo
    .a(a[2]), //Al input a de sumador_completo3 le conecto a[2] de sumador_4b
    .b(b[2]), //Al input b de sumador_completo3 le conecto b[2] de sumador_4b
    .cin(c2), //Al input cin de sumador_completo3 le conecto c2
    .sum(sum[2]), //Cableo sum a sum[2]
    .cout(c3) //Cableo cout a c3
  );

  sumador_completo sumador_completo4 ( //Llamo sumador_completo4 a esta cuarta copia del módulo sumador_completo
    .a(a[3]), //Al input a de sumador_completo4 le conecto a[3] de sumador_4b
    .b(b[3]), //Al input b de sumador_completo4 le conecto b[3] de sumador_4b
    .cin(c3), //Al input cin de sumador_completo4 le conecto c3
    .sum(sum[3]), //Cableo sum a sum[3]. Ya quedó conformado el resultado final de la suma entre a y b de sumador_4b
    .cout(cout) //La salida cout de sumador_completo4 tendrá el carry del resultado de la suma entre a y b de sumador_4b.
  );

endmodule
