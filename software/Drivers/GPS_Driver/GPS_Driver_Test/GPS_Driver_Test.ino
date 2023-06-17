#include "GPS_Driver.h"

void setup()
{
  Serial.begin(9600);
  GPS_init();
}

void loop()
{
  float longtude ; 
  float latitude ; 

  Get_GPS_Location(&longtude ,&latitude) ;

  Serial.println("Longtude = ");
  Serial.println(longtude);
  Serial.println("latitude = ");
  Serial.println(latitude);
}
      

      