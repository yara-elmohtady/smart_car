#include "ultarsonic.h"



void setup() {
  // put your setup code here, to run once:
  Ultrasonic_init();
  serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  struct Ultrasonic_Distance Ultrasonic_distance ;

  Ultrasonic_distance.Back_distance1 = Ultrasonic_Scan_Back(Back_Distance) ;
  Serial.println("Back Sensor 1:");
  Serial.println(Ultrasonic_distance.Back_distance1);
  


}

