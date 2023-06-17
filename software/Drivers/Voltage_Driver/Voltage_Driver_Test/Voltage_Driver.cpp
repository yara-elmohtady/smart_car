#include "Voltage_Driver.h"
#include "Pinout.h"
#include "Arduino.h"


float Get_Battary_voltage()
{
    // put your main code here, to run repeatedly:
    float Battary_Voltage =0.0 ; 
    static float Sensor_Value = 0;
  
    Sensor_Value = analogRead(VOLTAGR_SENSOR_PIN);
    // voltage equation 
    Battary_Voltage = (((9*Sensor_Value)-1980)/598)+3;
  
    return Battary_Voltage;
}