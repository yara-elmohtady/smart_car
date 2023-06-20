#include <ESP8266WiFi.h>        
#include <ESP8266WiFiMulti.h>   
#include <ESP8266WebServer.h>   
#include <Arduino.h>


ESP8266WiFiMulti wifiMulti;     
ESP8266WebServer esp8266_server(80);
String receivedValue = "";


void WIFI_Driver_init(){

  wifiMulti.addAP("CHT-1233", "077333893"); 

  wifiMulti.addAP("ssid_from_AP_2", "your_password_for_AP_2"); 
  wifiMulti.addAP("ssid_from_AP_3", "your_password_for_AP_3"); 
  int i = 0;                                

  while (wifiMulti.run() != WL_CONNECTED) {  

    delay(1000);                             

    break ; 
  }                                          

}

 

char WIFI_Get_Comand(void){
  return (esp8266_server.handleData());
 
}


void WIFI_Send_command(char cmd) {
  esp8266_server.send(200, "text/html", cmd);  
}


char handleData() {
  receivedValue = esp8266_server.arg("plain");
  Serial.print("Received value");
  Serial.println(receivedValue);
  char comand =0 ; 
  comand = (char)receivedValue;
}


// 设置处理404情况的函数'handleNotFound'
void handleNotFound(){
  esp8266_server.send(404, "text/plain", "404: Not found"); 
}