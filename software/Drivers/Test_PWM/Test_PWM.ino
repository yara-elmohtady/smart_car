


void setup() {
pinMode(D3,OUTPUT) ; // Motor in1
pinMode(D4,OUTPUT) ; //  Motor in2
Serian.begin(9600);

}

void loop() {


  Serial.println("Option1") ;
  digitalWrite(D3,HIGH) ; // DIR Motor 1
  digitalWrite(D4,HIGH) ; // DIR Motor 2
  
  delay(10000);
  Serial.println("Option 2 ") ;
  digitalWrite(D3,LOW) ; // DIR Motor 1
  digitalWrite(D4,LOW) ; // DIR Motor 2
  delay(10000);
  Serial.println("Option 3") ;
  digitalWrite(D3,HIGH) ; // DIR Motor 1
  digitalWrite(D4,LOW) ; // DIR Motor 2
  delay(10000);
  Serial.println("Option 4") ;
  digitalWrite(D3,LOW) ; // DIR Motor 1
  digitalWrite(D4,HIGH) ; // DIR Motor 2
  delay(10000);

}
