

#include <ShiftRegister74HC595.h>
ShiftRegister74HC595 sr (1, 3, 4, 5);
void setup() {
  Serial.begin(9600);
}

void loop() {

  
  uint8_t   pinValues[] = { B11111111 };
  sr.setAll(pinValues);
  delay(10000);
  sr.updateRegisters(); 



  pinValues[0] = { B00000000 };
  sr.setAll(pinValues);
  delay(10000);
  sr.updateRegisters(); 
}
