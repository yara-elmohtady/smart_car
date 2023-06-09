#include "Ultrasonic.h"
#include "Pinout.h"
#include "Arduino.h"

//define sound speed in cm/uS



struct Ultrasonic_Distance Ultrasonic_Scan_Front() {
    struct Ultrasonic_Distance Front_Data ;
    Back_Data.Front_distance1 = get_ultrasonic_reading(ULTRASONIC_F1_ECHO , ULTRASONIC_F1_ECHO);
    Back_Data.Front_distance2 = get_ultrasonic_reading(ULTRASONIC_F2_ECHO , ULTRASONIC_F2_ECHO);
    Back_Data.Front_distance3 = get_ultrasonic_reading(ULTRASONIC_F3_ECHO , ULTRASONIC_F3_ECHO);
    return Front_Data ;
    

}


struct Ultrasonic_Distance Ultrasonic_Scan_Back() 
{
  struct Ultrasonic_Distance Back_Data ;
  Back_Data.Back_distance1 = get_ultrasonic_reading(ULTRASONIC_B1_ECHO , ULTRASONIC_B1_ECHO);
  Back_Data.Back_distance2 = get_ultrasonic_reading(ULTRASONIC_B2_ECHO , ULTRASONIC_B2_ECHO);
  
    return  Back_Data;
}

void Ultrasonic_Trigger_Front()
{
    // Clears the trigPin
    digitalWrite(ULTRASONIC_F1_TRIGGER, LOW);
    digitalWrite(ULTRASONIC_F2_TRIGGER, LOW);
    digitalWrite(ULTRASONIC_F3_TRIGGER, LOW);

    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(ULTRASONIC_F1_TRIGGER, HIGH);
    digitalWrite(ULTRASONIC_F2_TRIGGER, HIGH);
    digitalWrite(ULTRASONIC_F3_TRIGGER, HIGH);
    delayMicroseconds(10);
    digitalWrite(ULTRASONIC_F1_TRIGGER, LOW);
    digitalWrite(ULTRASONIC_F2_TRIGGER, LOW);
    digitalWrite(ULTRASONIC_F3_TRIGGER, LOW);


}


void Ultrasonic_Trigger_Back()
{
    // Clears the trigPin
    digitalWrite(ULTRASONIC_B1_TRIGGER, LOW);
    //digitalWrite(ULTRASONIC_B2_TRIGGER, LOW);

    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(ULTRASONIC_B1_TRIGGER, HIGH);
    //digitalWrite(ULTRASONIC_B2_TRIGGER, HIGH);
    delayMicroseconds(10);
    digitalWrite(ULTRASONIC_B1_TRIGGER, LOW);
    //digitalWrite(ULTRASONIC_B2_TRIGGER, LOW);
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
  
  return distanceCm ;
}