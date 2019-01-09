#define Qout boolean
#define sizeQouts(reg) (sizeof(reg) / sizeof(reg[0]))

class ShiftRegister {
  private:
    uint8_t _pinDS;
    uint8_t _pinSTCP;
    uint8_t _pinSHCP;
  public:
    ShiftRegister(uint8_t pinDS, uint8_t pinSTCP, uint8_t pinSHCP) {
      _pinDS = pinDS;
      _pinSTCP = pinSTCP;
      _pinSHCP = pinSHCP;
    }

    void begin() {
      pinMode(_pinDS, OUTPUT);
      pinMode(_pinSTCP, OUTPUT);
      pinMode(_pinSHCP, OUTPUT);
    }

    void show(Qout registro[], int numberQouts) {
      digitalWrite(_pinSHCP, LOW);      
      for (int pos = numberQouts - 1 ; pos >= 0 ; pos--) {
        digitalWrite(_pinSTCP, LOW);
        digitalWrite(_pinDS, registro[pos]);
        digitalWrite(_pinSTCP, HIGH);
      }
      digitalWrite(_pinSHCP, HIGH);
    }

};
