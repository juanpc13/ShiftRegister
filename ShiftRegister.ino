#include "ShiftRegister.h"

const int DS = 2;       //pin para el data
const int SHCP = 4;     //pin para el shcp
const int STCP = 3;     //pin para el stcp
const int Qouts = 8;    //cantidad de salidas del 74hc595

boolean leds[] = {1,0,1,0,1,0,1,0};    //8 leds (1 encendido) y (0 apagado)

ShiftRegister ic74hc595(DS, SHCP, STCP, Qouts);//llamaremos ic74hc595 a nuestro objecto

void setup() {
  ic74hc595.begin();   //inicia los pines como OUTPUTS
}

void loop() {
  ic74hc595.show(leds);//envia al shift register los datos
}
