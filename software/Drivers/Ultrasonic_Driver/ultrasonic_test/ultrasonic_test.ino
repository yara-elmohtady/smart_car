#include "ultrasonic.h"


void setup() 
{
    Ultrasonic_init();
    Serial.begin(115200)
}      

void loop() 
{
  // put your main code here, to run repeatedly:
  float F_Distnce ;
  float B_Distnce ;

  F_Distnce =  get_ultrasonic_Front_reading();
  B_Distnce = get_ultrasonic_Back_reading();

  Serial.println("Front distance =");
  Serial.println(F_Distnce);
  Serial.println("Back distance =");
  Serial.println(B_Distnce);
  
}
