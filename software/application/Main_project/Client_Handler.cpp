#include "Client_Handler.h"
#include "BT_driver.h"



void Client_Handler_init()
{
    BT_Driver_init();
}

char Get_Client_cmd()
{
    return (BT_Get_comand());

}

void Set_Client_Msg(char cmd)
{
    BT_send_command(cmd);
}