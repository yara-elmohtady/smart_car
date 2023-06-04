

void Trigger_PWM(int PIN , int Duty_cycle) ; 



void setup() {
pin.Mode(16,OUTPUT) ; // PWM Motor 1
pin.Mode(5,OUTPUT) ; // PWM Motor 2
pin.Mode(4,OUTPUT) ; // PWM Motor 3
pin.Mode(0,OUTPUT) ; // PWM Motor 4

pin.Mode(14,OUTPUT) ; // DIR Motor 1
pin.Mode(12,OUTPUT) ; // DIR Motor 2
pin.Mode(13,OUTPUT) ; // DIR Motor 3
pin.Mode(15,OUTPUT) ; // DIR Motor 4

}

void loop() {
  serial.begin(9600);
  Trigger_PWM(16, 100);
  Trigger_PWM(5, 50);
  Trigger_PWM(4, 20);
  Trigger_PWM(0, 0);

  digital.Output(14,HIGH) ; // DIR Motor 1
  digital.Output(12,HIGH) ; // DIR Motor 2
  digital.Output(13,LOW) ; // DIR Motor 3
  digital.Output(15,LOW) ; // DIR Motor 4
}


void Trigger_PWM(int PIN , int Duty_cycle)
{
  int Total_Time = 100 ;
  int High_Time = 0 ;
  int Low_Time = 0 ;

  High_Time =(Duty_cycle /100)*Total_Time ;
  Low_Time = Total_Time - High_Time ;

  serial.println("Motor : " , PIN);
  serial.println("DC : " , Duty_cycle);
  serial.println("HIGH time : " , High_Time);
  serial.println("LOW TIme : " , Low_Time);

  digital.Output(PIN ,HIGH);
  delay(High_Time);
  digital.Output(PIN ,LOW);
  delay(Low_Time);

}