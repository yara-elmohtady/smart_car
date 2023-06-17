//
// Created by Mahmoud Elmohtady on 21/05/2023.
//

#ifndef C_PROGRAMMING_MOTO_DRIVER_H
#define C_PROGRAMMING_MOTO_DRIVER_H

#define Motor_speed 150

extern void Motor_Driver_init();
extern void Car_motion_forward();
extern void Car_motion_backword();
extern void Car_motion_turn_right();
extern void Car_motion_turn_left();
extern void Car_motion_stop();
extern void Car_motion_manipulation(int angle) ;

void Car_motion_acceleration_full();
void Car_motion_acceleration_Right();
void Car_motion_acceleration_Left();

#endif //C_PROGRAMMING_MOTO_DRIVER_H
