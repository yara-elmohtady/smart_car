#include <TinyGPS++.h>
#include <SoftwareSerial.h>

#define RX_PIN 16
#define TX_PIN 17

SoftwareSerial gpsSerial(RX_PIN, TX_PIN);

TinyGPSPlus gps;

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);

  Serial.println("Neo-6M GPS Module Test");
}

void loop() {
  while (gpsSerial.available()) {
    if (gps.encode(gpsSerial.read())) {
      Serial.print("Latitude: ");
      Serial.println(gps.location.lat(), 6);
      Serial.print("Longitude: ");
      Serial.println(gps.location.lng(), 6);
      Serial.print("Altitude (m): ");
      Serial.println(gps.altitude.meters());
      Serial.print("Speed (km/h): ");
      Serial.println(gps.speed.kmph());
    }
  }
}
