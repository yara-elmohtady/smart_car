
#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#define SOUND_SPEED 0.034

extern void Ultrasonic_init();

extern struct Ultrasonic_Distance Ultrasonic_Scan_Front();
extern struct Ultrasonic_Distance Ultrasonic_Scan_Back();

void Ultrasonic_Trigger_Front();
void Ultrasonic_Trigger_Back();

struct Ultrasonic_Distance {
  float Front_distance1 ;
  float Front_distance2 ;
  float Front_distance3 ;

  int Back_distance1 ;
  int Back_distance2 ;
};
#endif //ULTRASONIC_H
