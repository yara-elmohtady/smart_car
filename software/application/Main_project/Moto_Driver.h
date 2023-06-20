//
// Created by Mahmoud Elmohtady on 21/05/2023.
//

#ifndef C_PROGRAMMING_MOTO_DRIVER_H
#define C_PROGRAMMING_MOTO_DRIVER_H

#define Motor_speed 150

void Motor_Driver_init();
void Car_motion_forward(int speed);
void Car_motion_backword(int speed);
void Car_motion_turn_right(int speed);
void Car_motion_turn_left(int speed);
void Car_motion_stop();
void Car_motion_manipulation(int angle) ;

void Car_motion_reverse_left(int speed);
void Car_motion_reverse_right(int speed);

void Car_motion_acceleration_full(int speed);
void Car_motion_acceleration_Right(int speed);
void Car_motion_acceleration_Left(int speed);

#endif //C_PROGRAMMING_MOTO_DRIVER_H
