


// in1,4 forward 
// in2,3 backword

void setup() {
pinMode(D3,OUTPUT) ; // Motor in1
pinMode(D4,OUTPUT) ; //  Motor in2
pinMode(D5,OUTPUT) ; // Motor in3
pinMode(D6,OUTPUT) ; //  Motor in4
Serial.begin(9600);

}

void loop() {


  Serial.println("Motor stop") ;
  digitalWrite(D3,HIGH) ; // DIR Motor 1 motor stop
  digitalWrite(D4,HIGH) ; // DIR Motor 2 motor stop
  digitalWrite(D5,HIGH) ; // DIR Motor 1 motor stop
  digitalWrite(D6,HIGH) ; // DIR Motor 2 motor stop
  
  delay(10000);
  Serial.println("Forward") ;
  digitalWrite(D3,HIGH) ; // DIR Motor 1 motor stop
  digitalWrite(D4,LOW) ; // DIR Motor 2 motor stop
  digitalWrite(D5,LOW) ; // DIR Motor 1 motor stop
  digitalWrite(D6,HIGH) ; // DIR Motor 2 motor stop
  delay(10000);
  digitalWrite(D3,LOW) ; // DIR Motor 1 motor stop
  digitalWrite(D4,HIGH) ; // DIR Motor 2 motor stop
  digitalWrite(D5,HIGH) ; // DIR Motor 1 motor stop
  digitalWrite(D6,LOW) ; // DIR Motor 2 motor stop
  delay(10000);


}
