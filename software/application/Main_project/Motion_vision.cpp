#include "Motion_vision.h"
#include "ultrasonic.h"

void Motion_Vision_init()
{
    Ultrasonic_init();
}
char Motion_Vision_Check()
{
    float Front_Distance ;
    float Back_Distance ;
    Front_Distance = get_ultrasonic_Front_reading();
    Back_Distance  = get_ultrasonic_Back_reading();

    if (Front_Distance > Distance_Safe_Range)
    {
        return 0 ; 
    }
    else
    {
        return 1 ;
    }
}