module contador_posicion (
    input logic clk, input logic rst,
    input logic subir, input logic bajar,
    output logic [1:0] posicion
);
  // COMPLETAR: contador saturado entre 0 (cerrado) y 3 (abierto).
  typedef enum logic [1:0] { 
    posicion_0 = 2'b00,
    posicion_1 = 2'b01,
    posicion_2 = 2'b10,
    posicion_3 = 2'b11
  } posicion_t;

  posicion_t posicion_actual, posicion_siguiente;

  always_ff @(posedge clk or posedge rst) begin
    if (rst)
      posicion_actual <= posicion_0;
    else
      posicion_actual <= posicion_siguiente;
  end

  always_comb begin
    posicion_siguiente = posicion_actual;
    unique case (posicion_actual)
      posicion_0: if (subir)
                    posicion_siguiente = posicion_1;
      posicion_1: if (subir)
                    posicion_siguiente = posicion_2;
                  else if (bajar)
                    posicion_siguiente = posicion_0;
      posicion_2: if (subir)
                    posicion_siguiente = posicion_3;
                  else if (bajar)
                    posicion_siguiente = posicion_1;
      posicion_3: if (bajar)
                    posicion_siguiente = posicion_2; 
      default: posicion_siguiente = posicion_0;
    endcase
  end

  assign posicion = posicion_actual;
  
endmodule
