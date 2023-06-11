#include "Voltage_Driver.h"
#include "Pinout.h"
#include "Arduino.h"

 
float Get_Battary_voltage()
{
  static float Sensor_Value = 0;
  static float Battary_voltage = 0;
  Sensor_Value = analog.read(VOLTAGR_SENSOR_PIN);
  // voltage equation 
  Battary_voltage = (Sensor_Value * Battary_full_voltage )/ADC_Buffer

  return Battary_voltage;
}