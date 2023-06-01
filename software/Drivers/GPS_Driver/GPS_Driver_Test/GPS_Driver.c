#include <TinyGPS++.h>



void GPS_init(SoftwareSerial GPS_Serial) {
    GPS_Serial.begin(9600);
}

float * GPS_Get_location(TinyGPSPlus gps) {
    static float Position[2];
    while (ss.available() > 0){
    gps.encode(ss.read());
    if (gps.location.isUpdated()){

      Position[0] = gps.location.lat();
  
      Position[1] = gps.location.lng();

      return Position;
    }
  }
   

}







