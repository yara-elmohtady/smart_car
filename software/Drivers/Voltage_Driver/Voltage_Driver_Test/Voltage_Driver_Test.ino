#include "Voltage_Driver.h"
void setup() {
  // put your setup code here, to run once:
  serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  static float Battary_Voltage =0 ; 
   Battary_Voltage = Get_Battary_voltage();
   serial.println(Battary_Voltage);
}
