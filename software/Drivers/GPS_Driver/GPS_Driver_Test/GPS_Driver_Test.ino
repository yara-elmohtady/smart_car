#include "GPS_Driver.h"
#include <SoftwareSerial.h>
#include <TinyGPS++.h>
#include "Pinout.h"

TinyGPSPlus gps;
SoftwareSerial GPS_Serial(GPS_RXPin, GPS_TXPin);

void setup() {
  // put your setup code here, to run once:
  GPS_init(GPS_Serial);
}

void loop() {
  // put your main code here, to run repeatedly:
      static float Location[2] ;
      Location[0] = GPS_Get_location(gps)
      Serial.print("Latitude= "); 
      Serial.print(Location[0], 6);
      Serial.print(" Longitude= "); 
      Serial.print(Location[1], 6);
}
