//
// Created by Mahmoud Elmohtady on 21/05/2023.
//

#ifndef C_PROGRAMMING_MOTO_DRIVER_H
#define C_PROGRAMMING_MOTO_DRIVER_H

#define Motor_speed 150

void Motor_Driver_init();
void Car_motion_forward();
void Car_motion_backword();
void Car_motion_turn_right();
void Car_motion_turn_left();
void Car_motion_stop();
void Car_motion_manipulation(int angle) ;

void Car_motion_reverse_left();
void Car_motion_reverse_right();

void Car_motion_acceleration_full();
void Car_motion_acceleration_Right();
void Car_motion_acceleration_Left();

#endif //C_PROGRAMMING_MOTO_DRIVER_H
