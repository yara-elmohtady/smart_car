#include "Client_Handler.h"
#include "WIFI_Driver.h"

void Client_Handler_init()
{
    WIFI_Driver_init();
}

void Get_Client_cmd()
{
    char cmd ;
    cmd = WIFI_Get_Comand();
}

void Set_Client_Msg(char cmd)
{
    WIFI_Send_command( cmd);
}
