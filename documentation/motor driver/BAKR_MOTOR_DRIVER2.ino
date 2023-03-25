/* Mahmoud Bakr Kamel , Mahmoud Ahmed Abo_Elfutoh */


#define Forward        5
#define Backward       6
#define Left           7
#define Right          8
#define Stop           9
#define RightForward   10
#define RightBackward  11
#define LeftForward    12
#define LeftBackward   13
#define SidewaysLeft   14
#define SidewaysRight  15

#define MOTOR_LeftFrontWheel  1
#define MOTOR_LeftBackWheel   2
#define MOTOR_RightFrontWheel 3
#define MOTOR_RightBackWheel  4



#define PWM_PIN_MOTOR_LeftFrontWheel      9
#define DIR_PIN_MOTOR_LeftFrontWheel      8

#define PWM_PIN_MOTOR_LeftBackWheel      6
#define DIR_PIN_MOTOR_LeftBackWheel      7

#define PWM_PIN_MOTOR_RightFrontWheel    5
#define DIR_PIN_MOTOR_RightFrontWheel    2

#define PWM_PIN_MOTOR_RightBackWheel     3
#define DIR_PIN_MOTOR_RightBackWheel     4

void setup() { 
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(5,OUTPUT);
pinMode(2,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
  

}

void loop()
{

  // put your main code here, to run repeatedly:
/* Set_Car_Motion(Stop);
 delay(1000);
 Set_Car_Motion(Forward);
  delay(1000);
 Set_Car_Motion(Backward);
  delay(1000);
 Set_Car_Motion(Right);
  delay(1000); */
 Set_Car_Motion(Forward);
  //delay(1000);
  /*
 Set_Car_Motion(RightForward);
   delay(1000);
 Set_Car_Motion(RightBackward);
  delay(1000);
 Set_Car_Motion(LeftForward);
  delay(1000);
 Set_Car_Motion(LeftBackward);
  delay(1000);
 Set_Car_Motion(SidewaysLeft);
  delay(1000);
 Set_Car_Motion(SidewaysRight);
  delay(1000); */
}

void Set_Car_Speed(char Cpy_Num_oF_motor,char Copy_u8Speed)
{

 if ((Copy_u8Speed>= 0)&&(Copy_u8Speed<256))

    {
        switch(Cpy_Num_oF_motor)
        {
        case 1:
     analogWrite(PWM_PIN_MOTOR_LeftFrontWheel,Copy_u8Speed);
    
     break;
     case 2:
     analogWrite(PWM_PIN_MOTOR_LeftBackWheel,Copy_u8Speed);
     break;
     case 3:
     analogWrite(PWM_PIN_MOTOR_RightFrontWheel,Copy_u8Speed);
     break;
     case 4:
    analogWrite(PWM_PIN_MOTOR_RightBackWheel,Copy_u8Speed);
     break;
     default :;

    }
}
}
void Set_Car_Motion(char Copy_u8Direction){

if(Copy_u8Direction==Forward)
{
    Set_Car_Speed(MOTOR_LeftFrontWheel,100);
    Set_Car_Speed(MOTOR_LeftBackWheel,100);
    Set_Car_Speed(MOTOR_RightFrontWheel,100);
    Set_Car_Speed(MOTOR_RightBackWheel,100);
     digitalWrite(DIR_PIN_MOTOR_LeftFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_LeftBackWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightBackWheel,LOW);
}
else if(Copy_u8Direction==Backward)
{
    Set_Car_Speed(MOTOR_LeftFrontWheel,100);
    Set_Car_Speed(MOTOR_LeftBackWheel,100);
    Set_Car_Speed(MOTOR_RightFrontWheel,100);
    Set_Car_Speed(MOTOR_RightBackWheel,100);

     digitalWrite(DIR_PIN_MOTOR_LeftFrontWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_LeftBackWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_RightFrontWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_RightBackWheel,HIGH);
}
else if(Copy_u8Direction==Stop)
{
    Set_Car_Speed(MOTOR_LeftFrontWheel,0);
    Set_Car_Speed(MOTOR_LeftBackWheel,0);
    Set_Car_Speed(MOTOR_RightFrontWheel,0);
    Set_Car_Speed(MOTOR_RightBackWheel,0);

     digitalWrite(DIR_PIN_MOTOR_LeftFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_LeftBackWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightBackWheel,LOW);

}
else if(Copy_u8Direction==Right)
{
    Set_Car_Speed(MOTOR_LeftFrontWheel,100);
    Set_Car_Speed(MOTOR_LeftBackWheel,100);
    Set_Car_Speed(MOTOR_RightFrontWheel,100);
    Set_Car_Speed(MOTOR_RightBackWheel,100);

     digitalWrite(DIR_PIN_MOTOR_LeftFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_LeftBackWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightFrontWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_RightBackWheel,HIGH);
}
else if(Copy_u8Direction==Left)
{
   Set_Car_Speed(MOTOR_LeftFrontWheel,100);
    Set_Car_Speed(MOTOR_LeftBackWheel,100);
    Set_Car_Speed(MOTOR_RightFrontWheel,100);
    Set_Car_Speed(MOTOR_RightBackWheel,100);

     digitalWrite(DIR_PIN_MOTOR_LeftFrontWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_LeftBackWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_RightFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightBackWheel,LOW);

}
else if(Copy_u8Direction==RightForward )
{
    Set_Car_Speed(MOTOR_LeftFrontWheel,100);
    Set_Car_Speed(MOTOR_LeftBackWheel,0);
    Set_Car_Speed(MOTOR_RightFrontWheel,0);
    Set_Car_Speed(MOTOR_RightBackWheel,100);

     digitalWrite(DIR_PIN_MOTOR_LeftFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_LeftBackWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightBackWheel,LOW);
}
else if(Copy_u8Direction==RightBackward)
{
   Set_Car_Speed(MOTOR_LeftFrontWheel,0);
    Set_Car_Speed(MOTOR_LeftBackWheel,100);
    Set_Car_Speed(MOTOR_RightFrontWheel,100);
    Set_Car_Speed(MOTOR_RightBackWheel,0);

     digitalWrite(DIR_PIN_MOTOR_LeftFrontWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_LeftBackWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_RightFrontWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_RightBackWheel,HIGH);

}
else if(Copy_u8Direction==LeftForward)
{
   Set_Car_Speed(MOTOR_LeftFrontWheel,0);
    Set_Car_Speed(MOTOR_LeftBackWheel,100);
    Set_Car_Speed(MOTOR_RightFrontWheel,100);
    Set_Car_Speed(MOTOR_RightBackWheel,0);

     digitalWrite(DIR_PIN_MOTOR_LeftFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_LeftBackWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightBackWheel,LOW);

}
else if(Copy_u8Direction==LeftBackward)
{
    Set_Car_Speed(MOTOR_LeftFrontWheel,100);
    Set_Car_Speed(MOTOR_LeftBackWheel,0);
    Set_Car_Speed(MOTOR_RightFrontWheel,00);
    Set_Car_Speed(MOTOR_RightBackWheel,100);

     digitalWrite(DIR_PIN_MOTOR_LeftFrontWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_LeftBackWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_RightFrontWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_RightBackWheel,HIGH);

}
else if(Copy_u8Direction==SidewaysLeft)
{
    Set_Car_Speed(MOTOR_LeftFrontWheel,100);
    Set_Car_Speed(MOTOR_LeftBackWheel,100);
    Set_Car_Speed(MOTOR_RightFrontWheel,100);
    Set_Car_Speed(MOTOR_RightBackWheel,100);

     digitalWrite(DIR_PIN_MOTOR_LeftFrontWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_LeftBackWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_RightBackWheel,HIGH);

}
else if(Copy_u8Direction==SidewaysRight)
{
    Set_Car_Speed(MOTOR_LeftFrontWheel,100);
    Set_Car_Speed(MOTOR_LeftBackWheel,100);
    Set_Car_Speed(MOTOR_RightFrontWheel,100);
    Set_Car_Speed(MOTOR_RightBackWheel,100);

     digitalWrite(DIR_PIN_MOTOR_LeftFrontWheel,LOW);
     digitalWrite(DIR_PIN_MOTOR_LeftBackWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_RightFrontWheel,HIGH);
     digitalWrite(DIR_PIN_MOTOR_RightBackWheel,LOW);


}
}
