#include <TinyGPSPlus.h>

TinyGPSPlus gps;

void GPS_init() {
    Serial.begin(9600);
}

float * GPS_Get_location(TinyGPSPlus gps) {
    static float Position[2];
    //updateSerial();
    while (Serial.available() > 0) {
        if (gps.encode(Serial.read()))
        {
            if (gps.location.isValid()) {
                position[0] = (float) gps.location.lat();
                position[1] = (float) gps.location.lat();
                return position;
            }
        }
    }
    if (millis() > 5000 && gps.charsProcessed() < 10)
    {
        Serial.println(F("No GPS detected: check wiring."));
    }

}



