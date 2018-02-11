const int DS = A0;
const int SHCP = A1;
const int STCP = A2;
const int leds = 8;


void setup() {
  pinMode(DS, OUTPUT);
  pinMode(STCP, OUTPUT);
  pinMode(SHCP, OUTPUT);
}

void loop() {

  boolean posicion[8];

  for(int x=0 ; x<leds ; x++){
    posicion[x]=LOW;
    Mostrar(posicion);  
    delay(250);
  }
  
  

  for(int x=0 ; x<leds ; x++){
    posicion[x]=HIGH;
    Mostrar(posicion);  
    delay(250);
  }

  
  
  

}

void Mostrar(boolean registro[leds]){
  digitalWrite(SHCP, LOW);
  for(int pos=(leds-1); pos>=0 ; pos--){
    digitalWrite(STCP, LOW);
    digitalWrite(DS, registro[pos]);
    digitalWrite(STCP, HIGH);    
  }  
  digitalWrite(SHCP, HIGH);
}


