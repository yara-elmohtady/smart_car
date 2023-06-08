#include "Ultrasonic.h"
#include "Pinout.h"
#include "Arduino.h"

//define sound speed in cm/uS





void Ultrasonic_init() {
    /*
    pinMode(ULTRASONIC_F1_TRIGGER, OUTPUT); // Sets the trigPin as an Output
    pinMode(ULTRASONIC_F1_ECHO, INPUT); // Sets the echoPin as an Input

    pinMode(ULTRASONIC_F2_TRIGGER, OUTPUT); // Sets the trigPin as an Output
    pinMode(ULTRASONIC_F2_ECHO, INPUT); // Sets the echoPin as an Input

    pinMode(ULTRASONIC_F3_TRIGGER, OUTPUT); // Sets the trigPin as an Output
    pinMode(ULTRASONIC_F3_ECHO, INPUT); // Sets the echoPin as an Input
*/
    pinMode(ULTRASONIC_B1_TRIGGER, OUTPUT); // Sets the trigPin as an Output
    pinMode(ULTRASONIC_B1_ECHO, INPUT); // Sets the echoPin as an Input
/*
    pinMode(ULTRASONIC_B2_TRIGGER, OUTPUT); // Sets the trigPin as an Output
    pinMode(ULTRASONIC_B2_ECHO, INPUT); // Sets the echoPin as an Input
*/
}
/*
Ultrasonic_Distance Ultrasonic_Scan_Front() {
    struct Ultrasonic_Distance Front_Data ;
    float duration1,duration2,duration3;
    float distanceCm1,distanceCm2,distanceCm3;

    Ultrasonic_Trigger_Front();
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration1 = pulseIn(ULTRASONIC_F1_ECHO, HIGH);
    duration2 = pulseIn(ULTRASONIC_F2_ECHO, HIGH);
    duration3 = pulseIn(ULTRASONIC_F3_ECHO, HIGH);
    // Calculate the distance
    distanceCm1 = duration1 * SOUND_SPEED/2;
    distanceCm2 = duration2 * SOUND_SPEED/2;
    distanceCm3 = duration3 * SOUND_SPEED/2;

    Front_Data.Front_distance1 = distanceCm1;
    Front_Data.Front_distance2 = distanceCm2;
    Front_Data.Front_distance3 = distanceCm3;

    return Front_Data ;
    

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
*/

struct Ultrasonic_Distance Ultrasonic_Scan_Back() 
{
  struct Ultrasonic_Distance Back_Data ;
  long duration4,duration5;
  int distanceCm4,distanceCm5;

    Ultrasonic_Trigger_Back();
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration4 = pulseIn(D6, HIGH,10);
    //duration5 = pulseIn(ULTRASONIC_B2_ECHO, HIGH);
    // Calculate the distance
    distanceCm4 = duration4 * SOUND_SPEED/2;
    //distanceCm5 = duration5 * SOUND_SPEED/2;

    Back_Data.Back_distance1 = distanceCm4;
    //Front_Data.Back_distance2 = distanceCm5;


    return  Back_Data;
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
