


void setup() {
pinMode(D0,OUTPUT) ; // Motor in1
pinMode(D1,OUTPUT) ; //  Motor in2
Serial.begin(9600);
}

void loop() {

  Serial.println("Motor Move Forward") ;
  digitalWrite(D0,HIGH) ; // DIR Motor 1
  digitalWrite(D1,LOW) ; // DIR Motor 2
  
  delay(1000);
  Serial.println("Motor Move Backword") ;
  digitalWrite(D0,HIGH) ; // DIR Motor 1
  digitalWrite(D1,LOW) ; // DIR Motor 2
  delay(1000);

}
