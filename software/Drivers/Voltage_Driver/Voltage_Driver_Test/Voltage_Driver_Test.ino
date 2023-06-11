//#include "Arduino.h"
#define Battary_full_voltage 12
#define ADC_Buffer 4095


// Voltage_Sensor

#define VOLTAGR_SENSOR_PIN A0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float Battary_Voltage =0.0 ; 
   static float Sensor_Value = 0;
  
  Sensor_Value = analogRead(VOLTAGR_SENSOR_PIN);
  Serial.println("Sensor_Value");
    Serial.println(Sensor_Value);

  // voltage equation 
  //Battary_Voltage = (Sensor_Value * Battary_full_voltage )/ADC_Buffer;
 Battary_Voltage = (((9*Sensor_Value)-1980)/598)+3;
   Serial.println(Battary_Voltage);
     

}
