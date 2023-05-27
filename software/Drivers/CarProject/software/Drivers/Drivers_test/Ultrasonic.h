//
// Created by Mahmoud Elmohtady on 21/05/2023.
//

#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#define SOUND_SPEED 0.034

extern void Ultrasonic_init();
extern void Ultrasonic_Scan_Front();
void Ultrasonic_Trigger_Front();
void Ultrasonic_Print_Distance(float distanceCm);


#endif //ULTRASONIC_H
