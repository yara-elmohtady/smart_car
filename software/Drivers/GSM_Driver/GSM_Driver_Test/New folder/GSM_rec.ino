#include <SoftwareSerial.h>
/* Tutorial link: https://pijaeducation.com/arduino/gsm/send-receive-messages-using-sim800l-with-arduino/
   Create software serial pins: pin 2 as RX & 3 as TX
   Connect SIM800L module Rx to Pin 3 (Tx) of Arduino & Tx to Pin 2 (Rx) of Arduino
*/
SoftwareSerial mySerial(2, 3);

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("Initializing...");
  delay(1000);

  // Send attention command to check if all fine, it returns OK
  mySerial.println("AT");
  updateSerial();
  // Configuring module in TEXT mode
  mySerial.println("AT+CMGF=1");
  updateSerial();

  // Decides how newly arrived SMS messages should be handled
  mySerial.println("AT+CNMI=1,2,0,0,0");   
  updateSerial();
}

void loop() {
  updateSerial();
}

// For data transmission from Serial to Software Serial port & vice versa
void updateSerial() {
  delay(500);
  while (Serial.available()) {
    mySerial.write(Serial.read());//Forward what Serial received to Software Serial Port
  }
  
  while (mySerial.available()) {
    Serial.write(mySerial.read());//Forward what Software Serial received to Serial Port
  }
}