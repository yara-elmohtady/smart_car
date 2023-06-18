#include "Battery_Monitor.h"
#include "Voltage_Driver.h"


char Check_Battery()
{
    float Battery_value ;
    Battery_value = Get_Battary_voltage();

    if (Battery_value > 7)
    {
        return 0 ;
    }
    else
    {
        return 1;
    }
}