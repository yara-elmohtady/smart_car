#include "Moto_Driver.h"


void setup() {
    // put your setup code here, to run once:
    Motor_Driver_init();
    Serial.begin(9600);
}

void loop() {
    // put your main code here, to run repeatedly:
    Serial.println("Car_motion_forward");
    Car_motion_forward();
    delay(1000);
    Serial.println("Car_motion_backword");
    Car_motion_backword();
    delay(1000);
    Serial.println("Car_motion_turn_right");
    Car_motion_turn_right();
    delay(1000);
    Serial.println("Car_motion_turn_left");
    Car_motion_turn_left();
    delay(1000);
    Serial.println("Car_motion_stop");
    Car_motion_stop();
    delay(1000);
}
