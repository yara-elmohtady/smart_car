#include <TinyGPS++.h>
#include <SoftwareSerial.h>

TinyGPSPlus gps;
SoftwareSerial SerialGPS(D2, D3); 


float Latitude , Longitude;
String LatitudeString , LongitudeString;



void setup()
{
  Serial.begin(9600);
  SerialGPS.begin(9600);
  Serial.println();
  
}

void loop()
{
  while (SerialGPS.available() > 0)
    if (gps.encode(SerialGPS.read()))
    {
      if (gps.location.isValid())
      {
        Latitude = gps.location.lat();
        LatitudeString = String(Latitude , 6);
        Longitude = gps.location.lng();
        LongitudeString = String(Longitude , 6);

        Serial.println(Latitude);
        Serial.println(LatitudeString);
        Serial.println(Longitude);
        Serial.println(LongitudeString);
      }

   }   
}
      

      