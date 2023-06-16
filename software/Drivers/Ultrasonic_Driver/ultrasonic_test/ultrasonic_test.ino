#include "Pinout.h"

#define SOUND_SPEED 0.034
extern void Ultrasonic_init();
float get_ultrasonic_reading(int Trigger ,int Echo);

void setup() {
  // put your setup code here, to run once:
  Ultrasonic_init();
  Serial.begin(115200);


#define SOUND_SPEED 0.034


extern struct Ultrasonic_Distance Ultrasonic_Scan_Front();
extern struct Ultrasonic_Distance Ultrasonic_Scan_Back();

void Ultrasonic_Trigger_Front();
void Ultrasonic_Trigger_Back();

    
  struct Ultrasonic_Distance ;
  float Front_distance1 ;
  float Front_distance2 ;
  float Front_distance3 ;

  float Back_distance1 ;
  float Back_distance2 ;
    
}      

void loop() {
  // put your main code here, to run repeatedly:
  float Distnce ;

  Distnce = get_ultrasonic_reading(ULTRASONIC_F1_TRIGGER ,ULTRASONIC_F1_ECHO) ;
  Serial.println("Back Sensor 1:");
  Serial.println(Distnce);

  Distnce = get_ultrasonic_reading(ULTRASONIC_B1_TRIGGER ,ULTRASONIC_B1_ECHO) ;
  Serial.println("Back Sensor 2:");
  Serial.println(Distnce);
  
}


float get_ultrasonic_reading(int Trigger ,int Echo)
{
  long duration;
  float distanceCm;
  digitalWrite(Trigger, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(Echo, HIGH);
  
  // Calculate the distance
  distanceCm = duration * SOUND_SPEED/2;
  Serial.println("=================") ;
  Serial.println("Function reading :") ;
  Serial.println(distanceCm) ;
  Serial.println("=================") ;
  
  return distanceCm ;
}

void Ultrasonic_init() {
 
    pinMode(ULTRASONIC_F1_TRIGGER, OUTPUT); // Sets the trigPin as an Output
    pinMode(ULTRASONIC_F1_ECHO, INPUT); // Sets the echoPin as an Input

    pinMode(ULTRASONIC_B1_TRIGGER, OUTPUT); // Sets the trigPin as an Output
    pinMode(ULTRASONIC_B1_ECHO, INPUT); // Sets the echoPin as an Input

}