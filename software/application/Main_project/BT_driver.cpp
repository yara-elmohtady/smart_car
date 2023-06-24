#include "BT_driver.h"
#include <SoftwareSerial.h>
#include "Arduino.h"

SoftwareSerial SerialBT(BT_RX, D10); 

char BT_Driver_init()
{
    SerialBT.begin(9600);
}

char BT_Get_comand()
{
    if((SerialBT.available() > 0))
    {
        return (SerialBT.read());
    }
}
void BT_send_command(char cmd)
{
    SerialBT.Write(cmd);
}