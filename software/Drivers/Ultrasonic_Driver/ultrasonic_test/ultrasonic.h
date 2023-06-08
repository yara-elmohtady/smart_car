
#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#define SOUND_SPEED 0.034

extern void Ultrasonic_init();

extern Ultrasonic_Distance Ultrasonic_Scan_Front();
extern Ultrasonic_Distance Ultrasonic_Scan_Back();

void Ultrasonic_Trigger_Front();
void Ultrasonic_Trigger_Back();

struct Ultrasonic_Distance {
  float Front_distance1 = 0.0;
  float Front_distance2 = 0.0;
  float Front_distance3 = 0.0;\

  float Back_distance1 = 0.0;
  float Back_distance2 = 0.0;
};
#endif //ULTRASONIC_H
