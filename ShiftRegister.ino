#include "ShiftRegister.h"

const uint8_t DS = D7;       //pin para el data
const uint8_t SHCP = D5;     //pin para el shcp
const uint8_t STCP = D6;     //pin para el stcp
const uint8_t Qouts = 8;    //cantidad de salidas del 74hc595

boolean leds[] = {0, 0, 0, 0, 1, 1, 1, 1}; //8 leds (1 encendido) y (0 apagado)

ShiftRegister ic74hc595(DS, SHCP, STCP, Qouts);//llamaremos ic74hc595 a nuestro objecto

void setup() {
  ic74hc595.begin();   //inicia los pines como OUTPUTS
}

void loop() {
  leds[5] = 0;
  leds[6] = 0;
  leds[7] = 0;
  ic74hc595.show(leds);//envia al shift register los datos
  delay(1000);

  leds[5] = 1;
  leds[6] = 1;
  leds[7] = 1;
  ic74hc595.show(leds);//envia al shift register los datos
  delay(1000);
}
