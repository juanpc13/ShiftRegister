#include "ShiftRegister.h"

const uint8_t DS = 11;       //pin para el data
const uint8_t SHCP = 12;     //pin para el shcp
const uint8_t STCP = 13;     //pin para el stcp

Qout leds[] = {0, 0, 0, 0, 0, 0, 0, 0}; //8 leds (1 encendido) y (0 apagado)

ShiftRegister shiftReg(DS, SHCP, STCP);//llamaremos ic74hc595 a nuestro objecto

void setup() {
  shiftReg.begin();   //inicia los pines como OUTPUTS
}

void loop() {

  //sizeQouts devuelve el tamaño de leds
  int cantidadLeds = sizeQouts(leds);

  //Encender cada led cada 500 milisegundos  
  for (int i = 0 ; i < cantidadLeds; i++) {
    leds[i] = 1;
    shiftReg.show(leds, sizeQouts(leds)); //envia al shift register los datos
    delay(500);
  }

  //Apagar cada led cada 500 milisegundos
  for (int i = 0 ; i < cantidadLeds; i++) {
    leds[i] = 0;
    shiftReg.show(leds, sizeQouts(leds)); //envia al shift register los datos
    delay(500);
  }
  
}
