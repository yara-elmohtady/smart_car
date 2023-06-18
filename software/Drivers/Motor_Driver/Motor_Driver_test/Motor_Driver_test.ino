#include "Moto_Driver.h"

    // angle 1 == manuplate right
    // angle 2 == manuplate left
    // angle 3 == manuplate reverse left
    // angle 4 == manuplate reverse Right


void setup() {
    // put your setup code here, to run once:
    Motor_Driver_init();
    Serial.begin(115200);
}

void loop() {
    // put your main code here, to run repeatedly:
    /*
    Serial.println("Car_motion_forward");
    Car_motion_forward();
    delay(10000);
    Serial.println("Car_motion_stop");
    Car_motion_stop();
    Serial.println("Car_motion_backword");
    Car_motion_backword();
    delay(10000);
    Serial.println("Car_motion_stop");
    Car_motion_stop();
    Serial.println("Car_motion_turn_right");
    Car_motion_turn_right();
    delay(10000);
    Serial.println("Car_motion_stop");
    Car_motion_stop();
    Serial.println("Car_motion_turn_left");
    Car_motion_turn_left();
    delay(10000);
    Serial.println("Car_motion_stop");
    Car_motion_stop();

    delay(1000);
    */
    Serial.println("Car_motion_forward");
    Car_motion_forward();
   delay(10000);
   Serial.println("angle 1 == manuplate right");
   Car_motion_manipulation(1);
    delay(10000);
    Serial.println("angle 2 == manuplate Left");
   Car_motion_manipulation(2);
    delay(10000);
    Serial.println("angle 3 == manuplate reverse left");
   Car_motion_manipulation(3);
    delay(10000);
    Serial.println("angle 4 == manuplate reverse Right");
   Car_motion_manipulation(4);

    delay(10000);
}
