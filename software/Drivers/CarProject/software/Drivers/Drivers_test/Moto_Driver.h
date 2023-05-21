//
// Created by Mahmoud Elmohtady on 21/05/2023.
//

#ifndef C_PROGRAMMING_MOTO_DRIVER_H
#define C_PROGRAMMING_MOTO_DRIVER_H

#define Motor_speed 50
external void Motor_Driver_init();
external void Car_motion_forward();
external void Car_motion_backword();
external void Car_motion_turn_right();
external void Car_motion_turn_left();
external void Car_motion_reverse_right();
external void Car_motion_reverse_left();
external void Car_motion_stop();

#endif //C_PROGRAMMING_MOTO_DRIVER_H
