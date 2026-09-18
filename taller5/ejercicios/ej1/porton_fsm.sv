module porton_fsm (
    input  logic clk,
    input  logic rst,
    input  logic button,
    output logic cerrado,
    output logic abriendo,
    output logic abierto,
    output logic cerrando
);
  // COMPLETAR: FSM Moore con estados CERRADO, ABRIENDO, ABIERTO y CERRANDO.

  //Creo la lista de estados
  typedef enum logic [1:0] {
    e0 = 2'b00,
    e1 = 2'b01,
    e2 = 2'b10, 
    e3 = 2'b11
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
      e0: if(button)
            estado_siguiente = e1;

      e1: estado_siguiente = e2;

      e2: if(button)
            estado_siguiente = e3;

      e3: estado_siguiente = e0;

      default: estado_siguiente = e0; //Si caigo a un estado inválido, vuelvo a e0
    endcase
  end

  //Lógica de salida
  always_comb begin
    unique case (estado_actual)
      e0: begin
        cerrado = 1'b1;
        abriendo = 1'b0;
        abierto = 1'b0;
        cerrando = 1'b0;
      end

      e1: begin
        cerrado = 1'b0;
        abriendo = 1'b1;
        abierto = 1'b0;
        cerrando = 1'b0;
      end

      e2: begin
        cerrado = 1'b0;
        abriendo = 1'b0;
        abierto = 1'b1;
        cerrando = 1'b0;
      end

      e3: begin
        cerrado = 1'b0;
        abriendo = 1'b0;
        abierto = 1'b0;
        cerrando = 1'b1;
      end

      //estado inválido, el portón queda cerrado
      default: begin
        cerrado = 1'b1;
        abriendo = 1'b0;
        abierto = 1'b0;
        cerrando = 1'b0;
      end
    endcase
  end

endmodule
