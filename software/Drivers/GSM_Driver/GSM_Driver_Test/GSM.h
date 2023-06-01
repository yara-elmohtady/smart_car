
#ifndef GSM_H
#define GSM_H

#define Battary_full_voltage 12
#define ADC_Buffer 4095

extern void GSM_Init(SoftwareSerial GEM_Serial);
extern void GSM_Send_comand(String text);
extern string GSM_Get_comand();

void parseData(String buff);
void extractSms(String buff);


#endif //GSM_H
