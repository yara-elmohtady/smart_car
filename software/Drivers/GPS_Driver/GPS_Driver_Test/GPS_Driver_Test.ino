#include "GPS_Driver.h"
#include <SoftwareSerial.h>
#include <TinyGPS++.h>
#include "Pinout.h"

TinyGPSPlus gps;
SoftwareSerial GPS_Serial(GPS_RXPin, GPS_TXPin);
struct Location Cur_Location1;
void setup() {
  // put your setup code here, to run once:
  GPS_init();
  GPS_Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
      static float Location[2] ;
      Cur_Location = GPS_Get_location(gps)

      Serial.print("Latitude= "); 
      Serial.print(Cur_Location.longtude, 6);
      Serial.print(" Longitude= "); 
      Serial.print(Cur_Location.latitude, 6);
}
