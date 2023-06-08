#include "ultrasonic.h"



void setup() {
  // put your setup code here, to run once:
  Ultrasonic_init();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  struct Ultrasonic_Distance Ultrasonic_distance ;

  Ultrasonic_distance = Ultrasonic_Scan_Back() ;
  Serial.println("Back Sensor 1:");
  Serial.println(Ultrasonic_distance.Back_distance1);
  


}
