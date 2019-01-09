class ShiftRegister {
  private:
    uint8_t _pinDS;
    uint8_t _pinSTCP;
    uint8_t _pinSHCP;
    uint8_t _outputs;
  public:
    ShiftRegister(uint8_t pinDS, uint8_t pinSTCP, uint8_t pinSHCP, uint8_t outputs) {
      _pinDS = pinDS;
      _pinSTCP = pinSTCP;
      _pinSHCP = pinSHCP;
      _outputs = outputs;
    }

    void begin() {
      pinMode(_pinDS, OUTPUT);
      pinMode(_pinSTCP, OUTPUT);
      pinMode(_pinSHCP, OUTPUT);
    }

    void show(boolean registro[]) {
      digitalWrite(_pinSHCP, LOW);
      for (int pos = _outputs - 1 ; pos >= 0 ; pos--) {
        digitalWrite(_pinSTCP, LOW);
        digitalWrite(_pinDS, registro[pos]);
        digitalWrite(_pinSTCP, HIGH);
      }
      digitalWrite(_pinSHCP, HIGH);
    }

};
