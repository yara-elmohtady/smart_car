
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


void Car_motion_forward(int speed)
{
    digitalWrite(Motor_Driver_Right_Dir_in1,HIGH);
    digitalWrite(Motor_Driver_Right_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Left_Dir_in3,HIGH);
    digitalWrite(Motor_Driver_Left_Dir_in4,LOW);
    
    Car_motion_acceleration_full(speed);
}

void Car_motion_backword(int speed)
{
    digitalWrite(Motor_Driver_Right_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Right_Dir_in2,HIGH);

    digitalWrite(Motor_Driver_Left_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Left_Dir_in4,HIGH);
    
    Car_motion_acceleration_full( speed);
}

void Car_motion_turn_left(int speed)
{
    digitalWrite(Motor_Driver_Left_Dir_in3,HIGH);
    digitalWrite(Motor_Driver_Left_Dir_in4,LOW);

    digitalWrite(Motor_Driver_Right_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Right_Dir_in2,LOW);
    
    Car_motion_acceleration_Left( speed);
}


void Car_motion_turn_right(int speed)
{
    digitalWrite(Motor_Driver_Right_Dir_in1,HIGH);
    digitalWrite(Motor_Driver_Right_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Left_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Left_Dir_in4,LOW);
    Car_motion_acceleration_Right( speed);
}

void Car_motion_reverse_right(int speed)
{
    digitalWrite(Motor_Driver_Left_Dir_in3,HIGH);
    digitalWrite(Motor_Driver_Left_Dir_in4,LOW);

    digitalWrite(Motor_Driver_Right_Dir_in1,LOW);
    digitalWrite(Motor_Driver_Right_Dir_in2,LOW);
    
    Car_motion_acceleration_Left( speed);
}


void Car_motion_reverse_left(int speed)
{
    digitalWrite(Motor_Driver_Right_Dir_in1,HIGH);
    digitalWrite(Motor_Driver_Right_Dir_in2,LOW);

    digitalWrite(Motor_Driver_Left_Dir_in3,LOW);
    digitalWrite(Motor_Driver_Left_Dir_in4,LOW);
    Car_motion_acceleration_Right( speed);
}

void Car_motion_stop()
{
    // Car stop
    digitalWrite(Motor_Driver_Right_Dir_in1,HIGH);
    digitalWrite(Motor_Driver_Right_Dir_in2,HIGH);

    digitalWrite(Motor_Driver_Left_Dir_in3,HIGH);
    digitalWrite(Motor_Driver_Left_Dir_in4,HIGH);

    analogWrite(Motor_Driver_Right_PWM,0);
    analogWrite(Motor_Driver_Left_PWM,0);
}


void Car_motion_acceleration_full(int speed)
{
    analogWrite(Motor_Driver_Right_PWM,speed);
    analogWrite(Motor_Driver_Left_PWM,speed);
}

void Car_motion_acceleration_Right(int speed)
{
  analogWrite(Motor_Driver_Right_PWM,speed);
}

void Car_motion_acceleration_Left(int speed)
{
   analogWrite(Motor_Driver_Left_PWM,speed);
}


void Car_motion_manipulation(int angle)
{
    // angle 1 == manuplate right
    // angle 2 == manuplate left
    // angle 3 == manuplate reverse left
    // angle 4 == manuplate reverse Right
    
    if (angle == 1)
    {
        Car_motion_turn_right(11);
        delayMicroseconds(1000);
        Car_motion_stop();
    }
    else if (angle == 1)
    {
        Car_motion_turn_left(11);
        delayMicroseconds(1000);
        Car_motion_stop();
    }
    else if (angle == 3)
    {
        Car_motion_reverse_left(11);
        delayMicroseconds(1000);
        Car_motion_stop();
    }
    else if (angle == 4)
    {
        Car_motion_reverse_right(11);
        delayMicroseconds(1000);
        Car_motion_stop();
    }
    

}

// End of file
