#include "GSM.h"
#include "Pinout.h"
#include "Arduino.h"


String smsStatus,senderNumber,receivedDate,msg;
boolean isReply = false;

void GSM_Init(SoftwareSerial GEM_Serial)
{
  GEM_Serial.begin(9600);
  GEM_Serial.print("AT+CMGF=1\r"); //SMS text mode
  delay(1000);
  //delete all sms
  GEM_Serial.println("AT+CMGD=1,4");
  delay(1000);
  GEM_Serial.println("AT+CMGDA= \"DEL ALL\"");
  delay(1000);
  smsStatus = "";
  senderNumber="";
  receivedDate="";
  msg="";
}

void GSM_Send_comand(char cmd);
char GSM_Get_comand();
///////////////

//sender phone number with country code
const String PHONE = "+2";

void loop() {
//////////////////////////////////////////////////
while(GEM_Serial.available()){
  parseData(GEM_Serial.readString());
}
//////////////////////////////////////////////////
while(Serial.available())  {
  GEM_Serial.println(Serial.readString());
}
//////////////////////////////////////////////////
} //main loop ends

//***************************************************
void parseData(String buff){
  Serial.println(buff);

  unsigned int len, index;
  //////////////////////////////////////////////////
  //Remove sent "AT Command" from the response string.
  index = buff.indexOf("\r");
  buff.remove(0, index+2);
  buff.trim();
  //////////////////////////////////////////////////
  
  //////////////////////////////////////////////////
  if(buff != "OK"){
    index = buff.indexOf(":");
    String cmd = buff.substring(0, index);
    cmd.trim();
    
    buff.remove(0, index+2);
    
    if(cmd == "+CMTI"){
      //get newly arrived memory location and store it in temp
      index = buff.indexOf(",");
      String response = buff.substring(index+1, buff.length()); 
      response = "AT+CMGR=" + response + "\r"; 
      //get the message stored at memory location "temp"
      GEM_Serial.println(response); 
    }
    else if(cmd == "+CMGR"){
      extractSms(buff);
      
      if(senderNumber == PHONE){
        doAction();
        //delete all sms
        GEM_Serial.println("AT+CMGD=1,4");
        delay(1000);
        GEM_Serial.println("AT+CMGDA= \"DEL ALL\"");
        delay(1000);
      }
    }
  //////////////////////////////////////////////////
  }
  else{
  //The result of AT Command is "OK"
  }
}

//************************************************************
void extractSms(String buff){
   unsigned int index;
   
    index = buff.indexOf(",");
    smsStatus = buff.substring(1, index-1); 
    buff.remove(0, index+2);
    
    senderNumber = buff.substring(0, 13);
    buff.remove(0,19);
   
    receivedDate = buff.substring(0, 20);
    buff.remove(0,buff.indexOf("\r"));
    buff.trim();
    
    index =buff.indexOf("\n\r");
    buff = buff.substring(0, index);
    buff.trim();
    msg = buff;
    buff = "";
    msg.toLowerCase();
}

string GSM_Get_comand(){
  string User_command ="" ;
  User_command = msg;
  smsStatus = "";
  senderNumber="";
  receivedDate="";
  msg="";  

  return User_command ;
}

void GSM_Send_comand(String text)
{
    GEM_Serial.print("AT+CMGF=1\r");
    delay(1000);
    GEM_Serial.print("AT+CMGS=\""+PHONE+"\"\r");
    delay(1000);
    GEM_Serial.print(text);
    delay(100);
    GEM_Serial.write(0x1A); //ascii code for ctrl-26 //sim800.println((char)26); //ascii code for ctrl-26
    delay(1000);
    Serial.println("SMS Sent Successfully.");
}