
#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#define SOUND_SPEED 0.034

extern void Ultrasonic_init();
extern void Ultrasonic_Scan_Front();
extern double * Ultrasonic_Trigger_Front(double sensor[]);
void Ultrasonic_Print_Distance(float distanceCm);
extern double * Ultrasonic_Scan_Back(double sensor[]);
void Ultrasonic_Trigger_Back();


#endif //ULTRASONIC_H
