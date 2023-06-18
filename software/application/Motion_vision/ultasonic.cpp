#include "Pinout.h"
#include "ultrasonic.h"
#include "Arduino.h"


void Ultrasonic_init() {
 
    pinMode(ULTRASONIC_F1_TRIGGER, OUTPUT); // Sets the trigPin as an Output
    pinMode(ULTRASONIC_F1_ECHO, INPUT); // Sets the echoPin as an Input

    pinMode(ULTRASONIC_B1_TRIGGER, OUTPUT); // Sets the trigPin as an Output
    pinMode(ULTRASONIC_B1_ECHO, INPUT); // Sets the echoPin as an Input

}

float get_ultrasonic_Front_reading()
{
    long duration;
    float distanceCm;
    digitalWrite(ULTRASONIC_F1_TRIGGER, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(ULTRASONIC_F1_TRIGGER, HIGH);
    delayMicroseconds(10);
    digitalWrite(ULTRASONIC_F1_TRIGGER, LOW);
    
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(ULTRASONIC_F1_ECHO, HIGH);
    
    // Calculate the distance
    distanceCm = duration * SOUND_SPEED/2;

    return distanceCm;
}
float get_ultrasonic_Back_reading()
{
    long duration;
    float distanceCm;
    digitalWrite(ULTRASONIC_B1_TRIGGER, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(ULTRASONIC_B1_TRIGGER, HIGH);
    delayMicroseconds(10);
    digitalWrite(ULTRASONIC_B1_TRIGGER, LOW);
    
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(ULTRASONIC_B1_ECHO, HIGH);
    
    // Calculate the distance
    distanceCm = duration * SOUND_SPEED/2;

    return distanceCm;
}




