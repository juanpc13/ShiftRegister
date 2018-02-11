#include "ShiftRegister.h"

const int DS = 2;
const int SHCP = 4;
const int STCP = 3;
const int outs = 8;

boolean n0[] = {1,1,1,0,1,1,1,0};
boolean n1[] = {1,0,0,0,1,0,0,0};
boolean n2[] = {1,1,0,1,0,1,1,0};
boolean n3[] = {1,1,0,1,1,1,0,0};
boolean n4[] = {1,0,1,1,1,0,0,0};
boolean n5[] = {0,1,1,1,1,1,0,0};
boolean n6[] = {0,1,1,1,1,1,1,0};
boolean n7[] = {1,1,0,0,1,0,0,0};
boolean n8[] = {1,1,1,1,1,1,1,0};
boolean n9[] = {1,1,1,1,1,1,0,0};

ShiftRegister ic74hc595(DS, SHCP, STCP, outs);

void setup() {
  Serial.begin(9600);
  ic74hc595.begin();
}

void loop() {

  int t = 750;

  ic74hc595.show(n0);
  delay(t);
  ic74hc595.show(n1);
  delay(t);
  ic74hc595.show(n2);
  delay(t);
  ic74hc595.show(n3);
  delay(t);
  ic74hc595.show(n4);
  delay(t);
  ic74hc595.show(n5);
  delay(t);
  ic74hc595.show(n6);
  delay(t);
  ic74hc595.show(n7);
  delay(t);
  ic74hc595.show(n8);
  delay(t);
  ic74hc595.show(n9);
  delay(t);


}
