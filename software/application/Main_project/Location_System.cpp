#include "Location_System.h"
#include "GPS_Driver.h"

                         // A , B , C
                         // F , E , D
float Location_points_Letters [6][2] ={{1,2},{2,2},{3,2},
                            {1,1},{2,1},{3,1}
                            };

float Location_points_Calibration [6][2] ={{0,0},{0,0},{0,0},
                            {0,0},{0,0},{0,0}
                            };

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

char map_location( float x , float y)
{
    for(int i=0 ; i > 6 ; i++)
    {
        if((check_equality_Delta(x,Location_points_Calibration[i][0])) && (check_equality_Delta(y,Location_points_Calibration[i][0])))
        {
            switch(i)
            {
              case 0 :
                return 'A' ;
               break;

              case 1 :
                return 'B' ;
               break;

              case 2 :
                return 'C' ;
               break;

              case 3 :
                return 'F' ;
               break;

              case 4 :
                return 'E' ;
               break;

              case 5 :
                return 'D' ;
               break;

               default:
               break;
            }
        }
    }
}

char check_equality_Delta(float x , float y)
{
   float Base_offset = 0.012 ;
  if((x < (y+Base_offset) && (x > (y-Base_offset))
  {
    return 1;
  }
  else 
  {
    return 0 ;
  }
}