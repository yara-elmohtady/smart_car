
#include "Pinout.h"
#include "Moto_Driver.h"
#include "Arduino.h"



void Motor_Driver_init() {
  // put your setup code here, to run once:
pinMode(Motor_Driver_Right_Dir_in1,OUTPUT);
pinMode(Motor_Driver_Right_Dir_in2,OUTPUT);

pinMode(Motor_Driver_Left_Dir_in3,OUTPUT);
pinMode(Motor_Driver_Left_Dir_in4,OUTPUT);

pinMode(Motor_Driver_Right_PWM,OUTPUT);
pinMode(Motor_Driver_Left_PWM,OUTPUT);

}


void Car_motion_forward()
{
    digitalWrite(Motor_Driver_Right_Dir_in1,HIGH);
    digitalWrite(Motor_Driver_Right_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Left_Dir_in3,HIGH);
    digitalWrite(Motor_Driver_Left_Dir_in4,LOW);
    
    Car_motion_acceleration_full();
}

void Car_motion_backword()
{
    digitalWrite(Motor_Driver_Right_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Right_Dir_in2,HIGH);

    digitalWrite(Motor_Driver_Left_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Left_Dir_in4,HIGH);
    
    Car_motion_acceleration_full();
}

void Car_motion_turn_right()
{
    digitalWrite(Motor_Driver_Left_Dir_in3,HIGH);
    digitalWrite(Motor_Driver_Left_Dir_in4,LOW);
    
    Car_motion_acceleration_Left();
}


void Car_motion_turn_left()
{
    digitalWrite(Motor_Driver_Right_Dir_in1,HIGH);
    digitalWrite(Motor_Driver_Right_Dir_in2,LOW);
    Car_motion_acceleration_Right();
}


void Car_motion_stop()
{
    // Car stop
    digitalWrite(Motor_Driver_Right_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Right_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Left_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Left_Dir_in4,LOW);

    analogWrite(Motor_Driver_Right_PWM,0);
    analogWrite(Motor_Driver_Left_PWM,0);
}


void Car_motion_acceleration_full()
{
    analogWrite(Motor_Driver_Right_PWM,Motor_speed);
    analogWrite(Motor_Driver_Left_PWM,Motor_speed);
}

void Car_motion_acceleration_Right()
{
  analogWrite(Motor_Driver_Right_PWM,Motor_speed);
}

void Car_motion_acceleration_Left()
{
   analogWrite(Motor_Driver_Left_PWM,Motor_speed);
}


void Car_motion_manipulation(int angle)
{
    return 0 ; 
}

// End of file
