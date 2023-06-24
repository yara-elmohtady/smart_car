#include "State_Machine.h"
#include <Arduino_FreeRTOS.h>



void TaskA( void *pvParameters );
void TaskB( void *pvParameters );


void setup() {
 State_Macine_init() ; 

  xTaskCreate(
    TaskA
    ,  "Main_Task"   
    ,  128  
    ,  NULL
    ,  1  
    ,  NULL );

  xTaskCreate(
    TaskB
    ,  "Background_Task_2"
    ,  128  
    ,  NULL
    ,  1  
    ,  NULL );

vTaskStartScheduler();

}

void loop()

{

}

void TaskA(void *pvParameters)  {

  pinMode(8, OUTPUT);

  while(1)

  {
  // code
    State_Machine_main_Task();

  }

}

void TaskB(void *pvParameters)  

{

  while(1)

  {
        State_Machine_Sub_Task();
    // background 

    vTaskDelay( 300 / portTICK_PERIOD_MS ); 

  }

}
