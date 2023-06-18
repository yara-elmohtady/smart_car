

#define in1 D0
#define in2 D1
#define in3 D2
#define in4 D3

#define ENA D4
#define ENB D5


void Moto_Speed(int speed , int time);

void setup() {
pinMode(in1,OUTPUT) ; 
pinMode(in2,OUTPUT) ; 
pinMode(in3,OUTPUT) ; 
pinMode(in4,OUTPUT) ; 

pinMode(ENA,OUTPUT) ; 
pinMode(ENB,OUTPUT) ; 

Serial.begin(9600);

analogWrite(ENA,0);
analogWrite(ENB,0);
}

void loop() {

  // Stop 
  Serial.println("Motor stop") ;
  digitalWrite(in1,HIGH) ; 
  digitalWrite(in2,HIGH) ; 
  digitalWrite(in3,HIGH) ; 
  digitalWrite(in4,HIGH) ; 
  Moto_Speed(0);
  delay(10000);

  // Forward 
  Serial.println("Motor Forward") ;
  digitalWrite(in1,HIGH) ; 
  digitalWrite(in2,LOW) ; 
  digitalWrite(in3,HIGH) ; 
  digitalWrite(in4,LOW) ; 
  Moto_Speed(160);
  delay(10000);

    // Backword 
  Serial.println("Motor Backword") ;
  digitalWrite(in1,LOW) ; 
  digitalWrite(in2,HIGH) ; 
  digitalWrite(in3,LOW) ; 
  digitalWrite(in4,HIGH) ; 
  Moto_Speed(160);
  delay(10000);

    // Turn right 
  Serial.println("Motor right") ;
  digitalWrite(in1,HIGH) ; 
  digitalWrite(in2,HIGH) ; 
  digitalWrite(in3,HIGH) ; 
  digitalWrite(in4,LOW) ; 
  Moto_Speed(160);
  delay(10000);


    // Turn left 
  Serial.println("Motor left") ;
  digitalWrite(in1,HIGH) ; 
  digitalWrite(in2,LOW) ; 
  digitalWrite(in3,HIGH) ; 
  digitalWrite(in4,HIGH) ; 
  Moto_Speed(160);
  delay(10000);


}



void Moto_Speed(int speed)
{
  analogWrite(ENA,speed);
  analogWrite(ENB,speed);
}