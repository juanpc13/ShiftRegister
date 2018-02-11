class ShiftRegister {
  private:
    int pinDS;
    int pinSTCP;
    int pinSHCP;
    int outputs;
  public:
    ShiftRegister(int _pinDS, int _pinSTCP, int _pinSHCP, int _outputs) {
      pinDS = _pinDS;
      pinSTCP = _pinSTCP;
      pinSHCP = _pinSHCP;
      outputs = _outputs;
    }

    void begin() {
      pinMode(pinDS, OUTPUT);
      pinMode(pinSTCP, OUTPUT);
      pinMode(pinSHCP, OUTPUT);
    }

    void show(boolean registro[]) {
      digitalWrite(pinSHCP, LOW);      
      for (int pos = outputs-1 ; pos >= 0 ; pos--) {
        digitalWrite(pinSTCP, LOW);
        digitalWrite(pinDS, registro[pos]);
        digitalWrite(pinSTCP, HIGH);
      }
      digitalWrite(pinSHCP, HIGH);
    }

};
