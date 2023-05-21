//Front Leds
int FrontLeft   = 8;
int FrontRight  = 9;

//Back leds
int BackLeft    = 10;
int BackRight   = 11;

void setup() {

  //Front Leds
  pinMode(FrontLeft, OUTPUT);
  pinMode(FrontRight, OUTPUT);
  
  //Back leds
  pinMode(BackLeft, OUTPUT);
  pinMode(BackRight, OUTPUT);

}

//Both Front leds turn on 
void FrontLed() {
    digitalWrite(FrontLeft, HIGH);
    digitalWrite(FrontRight, HIGH);   
}

// Both Back leds turn on
void BackLed() {
    digitalWrite(BackLeft, HIGH);
    digitalWrite(BackRight, HIGH);   
}

//Left leds only Flashes (back and front)
void TurnLeft() {
  for (int i = 0; i <= 1; ) {

    //Left leds turn on
    digitalWrite(FrontLeft, HIGH);
    digitalWrite(BackLeft, HIGH);
    delay(10);

    //Left leds turn off
    digitalWrite(FrontLeft, LOW);
    digitalWrite(BackLeft, LOW);
    delay(10);

  }
}

//Right leds only Flashes (back and front)
void TurnLRight() {
  for (int i = 0; i <= 1; ) {

    //Right leds turn on
    digitalWrite(FrontRight, HIGH);
    digitalWrite(BackRight, HIGH);
    delay(10);

    //Right leds turn on
    digitalWrite(FrontRight, LOW);
    digitalWrite(BackRight, LOW);
    delay(10);

  }
}
