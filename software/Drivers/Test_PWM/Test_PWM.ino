


void setup() {
pinMode(16,OUTPUT) ; // Motor in1
pinMode(5,OUTPUT) ; //  Motor in2
Serian.begin(9600);
}

void loop() {

  Serial.println("Motor Move Forward") ;
  digitalWrite(16,HIGH) ; // DIR Motor 1
  digitalWrite(5,HIGH) ; // DIR Motor 2
  
  delay(1000);
  Serial.println("Motor Move Backword") ;
  digitalWrite(16,LOW) ; // DIR Motor 1
  digitalWrite(5,LOW) ; // DIR Motor 2
  delay(1000);

}
