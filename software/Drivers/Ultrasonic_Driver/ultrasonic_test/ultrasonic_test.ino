#include "ultarsonic.h"



void setup() {
  // put your setup code here, to run once:
  Ultrasonic_init();
  serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  double Front_Distance [3] ;
  double Back_Distance [3] ;
  Front_Distance = Ultrasonic_Scan_Front(Front_Distance);
  Back_Distance = Ultrasonic_Scan_Back(Back_Distance) ;
  serial.write("Front Sensor 1:",Front_Distance[0]);
  serial.write("Front Sensor 2:",Front_Distance[1]);
  serial.write("Front Sensor 3:",Front_Distance[2]);

  serial.write("Back Sensor 1:",Back_Distance[0]);
  serial.write("Back Sensor 2:",Back_Distance[1]);

}

