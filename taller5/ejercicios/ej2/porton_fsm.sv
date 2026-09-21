module porton_fsm_long (
    input logic clk, input logic rst, input logic button,
    input logic [1:0] posicion,
    output logic subir, output logic bajar,
    output logic abierto, output logic cerrado
);
  typedef enum logic [1:0] {
    e0 = 2'b00, //cerrado
    e1 = 2'b01, //abriendo
    e2 = 2'b10, //abierto
    e3 = 2'b11 //cerrando
  } estado_t;

  //Declaro las señales de estado actual y estado siguiente
  estado_t estado_actual, estado_siguiente;

  //Registro de estado
  always_ff @(posedge clk or posedge rst) begin
    if(rst)
      estado_actual <= e0;
    else
      estado_actual <= estado_siguiente;   
  end

  //Lógica de estado siguiente
  always_comb begin
    estado_siguiente = estado_actual;
    unique case (estado_actual)
      e0: if (button)
            estado_siguiente = e1;
      e1: if (posicion == 2'b11)
            estado_siguiente = e2;
      e2: if (button)
            estado_siguiente = e3;
      e3: if (posicion == 2'b00)
            estado_siguiente = e0; 
      default: estado_siguiente = e0;
    endcase
  end

  //Lógica de salida
  always_comb begin
    unique case (estado_actual)
      e0: begin
        subir = 1'b0;
        bajar = 1'b0;
        abierto = 1'b0;
        cerrado = 1'b1;        
      end
      
      e1: begin
        subir = 1'b1;
        bajar = 1'b0;
        abierto = 1'b0;
        cerrado = 1'b0;        
      end

      e2: begin
        subir = 1'b0;
        bajar = 1'b0;
        abierto = 1'b1;
        cerrado = 1'b0;        
      end

      e3: begin
        subir = 1'b0;
        bajar = 1'b1;
        abierto = 1'b0;
        cerrado = 1'b0;
      end
      default: begin //el portón está cerrado
        subir = 1'b0;
        bajar = 1'b0;
        abierto = 1'b0;
        cerrado = 1'b1;        
      end
    endcase
  end

endmodule
