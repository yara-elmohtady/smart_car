#include "GPS_Driver.h"
#include "Arduino.h"
#include <TinyGPS++.h>
#include <SoftwareSerial.h>



TinyGPSPlus gps;
SoftwareSerial SerialGPS(GPS_RXPin, GPS_TXPin); 

void GPS_init()
{
    SerialGPS.begin(9600);
}

void Get_GPS_Location(float *Location_long , float *Location_lat)
{
    float Latitude , Longitude;
    String LatitudeString , LongitudeString;

    while (SerialGPS.available() > 0)
        if (gps.encode(SerialGPS.read()))
        {
        if (gps.location.isValid())
        {
            Latitude = gps.location.lat();
            LatitudeString = String(Latitude , 6);
            Longitude = gps.location.lng();
            LongitudeString = String(Longitude , 6);

            //Serial.println(Latitude);
            //Serial.println(LatitudeString);
            //Serial.println(Longitude);
            //Serial.println(LongitudeString);
        }

    }   

    *Location_long = Longitude; 
    *Location_lat  = Latitude ;
}
