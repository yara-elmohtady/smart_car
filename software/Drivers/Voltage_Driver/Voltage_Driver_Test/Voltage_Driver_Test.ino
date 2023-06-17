#include "Voltage_Driver.h"


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
    float Battery_value ;
    Battery_value = Get_Battary_voltage();

    Serial.println("Voltage =");
    Serial.println(Battery_value);

}
