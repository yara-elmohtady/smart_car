#include "GSM.h"
#include "Pinout.h"
#include <SoftwareSerial.h>


SoftwareSerial GEM_Serial(GSM_RX_PIN,GSM_RX_PIN);

void setup() {
  // put your setup code here, to run once:
  GSM_Init(SoftwareSerial GEM_Serial) ;
}

void loop() {
  string Message ="";
  // put your main code here, to run repeatedly:
    GSM_Send_comand("Hello Yara") ;
    Message = GSM_Get_comand()
}
