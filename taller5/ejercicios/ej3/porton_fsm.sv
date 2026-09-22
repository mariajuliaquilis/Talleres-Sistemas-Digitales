module porton_fsm_smart (
    input logic clk, input logic rst, input logic button,
    input logic [1:0] posicion,
    output logic abrir, output logic cerrar, output logic pausa,
    output logic abierto, output logic cerrado
);
  // COMPLETAR: un click inicia; durante el movimiento pausa; desde la pausa
  // otro click inicia el movimiento en la dirección opuesta.
    typedef enum logic [2:0] { 
      e0 = 3'b000, //cerrado
      e1 = 3'b001, //abriendo
      e2 = 3'b010, //abierto
      e3 = 3'b011, //cerrando
      e4 = 3'b100, //pausa cuando estoy abriendo el portón
      e5 = 3'b101 //pausa cuando estoy cerrando el portón
    } estado_t;

    estado_t estado_actual, estado_siguiente;

    always_ff @(posedge clk or posedge rst) begin
      if (rst) 
        estado_actual <= e0;
      else
        estado_actual <= estado_siguiente;
    end

    always_comb begin
      estado_siguiente = estado_actual;
      unique case (estado_actual)
        e0: if (button)
              estado_siguiente = e1;
        e1: if (posicion == 2'b11)
              estado_siguiente = e2;
            else if (button)
              estado_siguiente = e4;
        e2: if (button)
              estado_siguiente = e3;
        e3: if (posicion == 2'b00)
              estado_siguiente = e0;
            else if (button)
              estado_siguiente = e5;
        e4: if (posicion == 2'b11)
              estado_siguiente = e2;
            else if (button)
              estado_siguiente = e3;
        e5: if (posicion == 2'b00)
              estado_siguiente = e0;
            else if (button)
              estado_siguiente = e1;
        default: estado_siguiente = e0;
      endcase
    end

    always_comb begin
      unique case (estado_actual)
        e0: begin
          abrir = 1'b0;
          cerrar = 1'b0;
          pausa = 1'b0;
          abierto = 1'b0;
          cerrado = 1'b1;
        end

        e1: begin
          abrir = 1'b1;
          cerrar = 1'b0;
          pausa = 1'b0;
          abierto = 1'b0;
          cerrado = 1'b0;
        end

        e2: begin
          abrir = 1'b0;
          cerrar = 1'b0;
          pausa = 1'b0;
          abierto = 1'b1;
          cerrado = 1'b0;          
        end

        e3: begin
          abrir = 1'b0;
          cerrar = 1'b1;
          pausa = 1'b0;
          abierto = 1'b0;
          cerrado = 1'b0;          
        end

        e4: begin
          abrir = 1'b0;
          cerrar = 1'b0;
          pausa = 1'b1;
          abierto = 1'b0;
          cerrado = 1'b0;
        end

        e5: begin
          abrir = 1'b0;
          cerrar = 1'b0;
          pausa = 1'b1;
          abierto = 1'b0;
          cerrado = 1'b0;
        end

        default: begin //el portón está cerrado
          abrir = 1'b0;
          cerrar = 1'b0;
          pausa = 1'b0;
          abierto = 1'b0;
          cerrado = 1'b1;        
        end
      endcase
    end
    
endmodule
