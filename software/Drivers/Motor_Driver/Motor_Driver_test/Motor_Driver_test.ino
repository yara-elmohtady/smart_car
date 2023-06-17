#include "Moto_Driver.h"


void setup() {
    // put your setup code here, to run once:
    Motor_Driver_init();
    Serial.begin(115200);
}

void loop() {
    // put your main code here, to run repeatedly:
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
    delay(10000);
}
