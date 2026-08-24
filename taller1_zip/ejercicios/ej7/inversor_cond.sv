module inversor_cond (
    input  logic [3:0] x,
    input  logic       ctrl,
    output logic [3:0] y
);
  
  assign y = ctrl ? ~x : x; //No hace falta hacer esto para cada bit.
  //assign y[0] = ctrl ? ~x[0] : x[0];
  //assign y[1] = ctrl ? ~x[1] : x[1];
  //assign y[2] = ctrl ? ~x[2] : x[2];
  //assign y[3] = ctrl ? ~x[3] : x[3];

endmodule
