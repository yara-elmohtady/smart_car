//*****************************//
// By     : Marwan             //
// created: 3/19/2023          //
//*****************************//

#define US1_T_PIN 3     //Ultrasonic num 1 trig pin "front"
#define US1_E_PIN 2     //Ultrasonic num 1 echo pin

#define US2_T_PIN 5     //Ultrasonic num 2 trig pin "front right"
#define US2_E_PIN 4     //Ultrasonic num 2 echo pin

#define US3_T_PIN 7     //Ultrasonic num 3 trig pin "front left"
#define US3_E_PIN 6     //Ultrasonic num 3 echo pin

#define US4_T_PIN 9     //Ultrasonic num 4 trig pin "rear right"
#define US4_E_PIN 8     //Ultrasonic num 4 echo pin

#define US5_T_PIN 11     //Ultrasonic num 5 trig pin "rear left"
#define US5_E_PIN 10     //Ultrasonic num 5 echo pin

int distance,time;
int FrontRightSensor,FrontLeftSensor,FrontSensor,RearRightSensor,RearLeftSensor;

void setup()
{
  Serial.begin(9600);
  
  pinMode(US1_T_PIN,OUTPUT);
  pinMode(US1_E_PIN,INPUT);

  pinMode(US2_T_PIN,OUTPUT);
  pinMode(US2_E_PIN,INPUT);

  pinMode(US3_T_PIN,OUTPUT);
  pinMode(US3_E_PIN,INPUT);

  pinMode(US4_T_PIN,OUTPUT);
  pinMode(US4_E_PIN,INPUT);

  pinMode(US5_T_PIN,OUTPUT);
  pinMode(US5_E_PIN,INPUT);

  


}

void loop() 
{
  
US_Sensor(US1_T_PIN, US1_E_PIN);
FrontSensor = distance;

US_Sensor(US2_T_PIN, US2_E_PIN);
FrontRightSensor = distance;

US_Sensor(US3_T_PIN, US3_E_PIN);
FrontLeftSensor = distance;

US_Sensor(US4_T_PIN, US4_E_PIN);
RearRightSensor = distance;

US_Sensor(US5_T_PIN, US5_E_PIN);
RearLeftSensor = distance;

Serial.print(" FrontSensor: ");
Serial.println(FrontSensor);
  delay(1000);
  
 Serial.print(" FrontRightSensor: "); 
 Serial.println(FrontRightSensor);
  delay(1000);

Serial.print(" FrontLeftSensor: ");  
 Serial.println(FrontLeftSensor);
  delay(1000);
  
 Serial.print(" RearRightSensor: ");  
 Serial.println(RearRightSensor);
  delay(1000);
  
Serial.print(" RearLeftSensor: ");   
 Serial.println(RearLeftSensor);
  delay(1000);
  
  

}

void US_Sensor(int trigPin,int echoPin)
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);

digitalWrite(trigPin, LOW);

time = pulseIn(echoPin, HIGH);
distance = (time/2) / 29.1;

}
