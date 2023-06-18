#include "Location_System.h"
#include "GPS_Driver.h"



void Location_system_init()
{
    GPS_init();
}
void Get_Location(float *longt , float *latit)
{
  float longtude ; 
  float latitude ; 

  Get_GPS_Location(&longtude ,&latitude) ;

  *longt = longtude;
  *latit = latitude ;
}