
#include "Pinout.h"
#include "Moto_Driver.h"

#include "Arduino.h"



void Motor_Driver_init() {
  // put your setup code here, to run once:
pinMode(Motor_Driver_Right_Front_Dir_in1,OUTPUT);
pinMode(Motor_Driver_Right_Front_Dir_in2,OUTPUT);

pinMode(Motor_Driver_Right_Back_Dir_in3,OUTPUT);
pinMode(Motor_Driver_Right_Back_Dir_in4,OUTPUT);

pinMode(Motor_Driver_Left_front_Dir_in1,OUTPUT);
pinMode(Motor_Driver_Left_front_Dir_in2,OUTPUT);

pinMode(Motor_Driver_Left_Back_Dir_in3,OUTPUT);
pinMode(Motor_Driver_Left_Back_Dir_in4,OUTPUT);

/*
pinMode(Motor_Driver_Right_Front_PWM,OUTPUT);
pinMode(Motor_Driver_Right_Back_PWM,OUTPUT);
pinMode(Motor_Driver_Left_front_PWM,OUTPUT);
pinMode(Motor_Driver_Left_Back_PWM,OUTPUT);
*/
}


void Car_motion_forward()
{
    digitalWrite(Motor_Driver_Right_Front_Dir_in1,HIGH);
    digitalWrite(Motor_Driver_Right_Front_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Right_Back_Dir_in3,HIGH);
    digitalWrite(Motor_Driver_Right_Back_Dir_in4,LOW);

    digitalWrite(Motor_Driver_Left_front_Dir_in1,HIGH);
    digitalWrite(Motor_Driver_Left_front_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Left_Back_Dir_in3,HIGH);
    digitalWrite(Motor_Driver_Left_Back_Dir_in4,LOW);
    // set car speed "Motion through PWM"
    //Car_motion_acceleration_full();
}

void Car_motion_backword()
{
    digitalWrite(Motor_Driver_Right_Front_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Right_Front_Dir_in2,HIGH);

    digitalWrite(Motor_Driver_Right_Back_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Right_Back_Dir_in4,HIGH);

    digitalWrite(Motor_Driver_Left_front_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Left_front_Dir_in2,HIGH);

    digitalWrite(Motor_Driver_Left_Back_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Left_Back_Dir_in4,HIGH);
    // set car speed "Motion through PWM"
    //Car_motion_acceleration_full();
}

void Car_motion_turn_right()
{
    digitalWrite(Motor_Driver_Right_Front_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Right_Front_Dir_in2,HIGH);

    digitalWrite(Motor_Driver_Right_Back_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Right_Back_Dir_in4,HIGH);

    digitalWrite(Motor_Driver_Left_front_Dir_in1,HIGH);
    digitalWrite(Motor_Driver_Left_front_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Left_Back_Dir_in3,HIGH);
    digitalWrite(Motor_Driver_Left_Back_Dir_in4,LOW);
    // set car speed "Motion through PWM"
    //Car_motion_acceleration_full();
}

void Car_motion_turn_left()
{
    digitalWrite(Motor_Driver_Right_Front_Dir_in1,HIGH);
    digitalWrite(Motor_Driver_Right_Front_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Right_Back_Dir_in3,HIGH);
    digitalWrite(Motor_Driver_Right_Back_Dir_in4,LOW);

    digitalWrite(Motor_Driver_Left_front_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Left_front_Dir_in2,HIGH);

    digitalWrite(Motor_Driver_Left_Back_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Left_Back_Dir_in4,HIGH);
    // set car speed "Motion through PWM"
    //Car_motion_acceleration_full();
}

void Car_motion_reverse_right()
{

    digitalWrite(Motor_Driver_Left_front_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Left_front_Dir_in2,HIGH);

    digitalWrite(Motor_Driver_Left_Back_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Left_Back_Dir_in4,HIGH);
    // set car speed "Motion through PWM" Let wheels
    //Car_motion_acceleration_Left();
}
void Car_motion_reverse_left()
{
    digitalWrite(Motor_Driver_Right_Front_Dir_in1,HIGH);
    digitalWrite(Motor_Driver_Right_Front_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Right_Back_Dir_in3,HIGH);
    digitalWrite(Motor_Driver_Right_Back_Dir_in4,LOW);
    // set car speed "Motion through PWM" Right wheels
    //Car_motion_acceleration_Right();
}



void Car_motion_stop()
{
    // Car stop
    digitalWrite(Motor_Driver_Right_Front_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Right_Front_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Right_Back_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Right_Back_Dir_in4,LOW);

    digitalWrite(Motor_Driver_Left_front_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Left_front_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Left_Back_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Left_Back_Dir_in4,LOW);
}

/*
void Car_motion_acceleration_full()
{
    digitalWrite(Motor_Driver_Right_Front_PWM,LOW);
    digitalWrite(Motor_Driver_Right_Back_PWM,LOW);
    digitalWrite(Motor_Driver_Left_front_PWM,LOW);
    digitalWrite(Motor_Driver_Left_Back_PWM,LOW);
    delay(Motor_speed1);
    digitalWrite(Motor_Driver_Right_Front_PWM,HIGH);
    digitalWrite(Motor_Driver_Right_Back_PWM,HIGH);
    digitalWrite(Motor_Driver_Left_front_PWM,HIGH);
    digitalWrite(Motor_Driver_Left_Back_PWM,HIGH);
    delay(Motor_speed);
}

void Car_motion_acceleration_Right()
{
    digitalWrite(Motor_Driver_Right_Front_PWM,LOW);
    digitalWrite(Motor_Driver_Right_Back_PWM,LOW);
    digitalWrite(Motor_Driver_Left_front_PWM,LOW);
    digitalWrite(Motor_Driver_Left_Back_PWM,LOW);
    delay(Motor_speed);
    digitalWrite(Motor_Driver_Right_Front_PWM,HIGH);
    digitalWrite(Motor_Driver_Right_Back_PWM,HIGH);
    digitalWrite(Motor_Driver_Left_front_PWM,LOW);
    digitalWrite(Motor_Driver_Left_Back_PWM,LOW);
    delay(Motor_speed);
}
void Car_motion_acceleration_Left()
{
    digitalWrite(Motor_Driver_Right_Front_PWM,LOW);
    digitalWrite(Motor_Driver_Right_Back_PWM,LOW);
    digitalWrite(Motor_Driver_Left_front_PWM,LOW);
    digitalWrite(Motor_Driver_Left_Back_PWM,LOW);
    delay(Motor_speed);
    digitalWrite(Motor_Driver_Right_Front_PWM,LOW);
    digitalWrite(Motor_Driver_Right_Back_PWM,LOW);
    digitalWrite(Motor_Driver_Left_front_PWM,HIGH);
    digitalWrite(Motor_Driver_Left_Back_PWM,HIGH);
    delay(Motor_speed);
}


*/


// End of file
