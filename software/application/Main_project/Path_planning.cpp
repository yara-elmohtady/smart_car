#include "Path_planning.h"

const char corner_arr[4] ={'A' , 'C' , 'D' ,'F'} ;
char roads_points[5] ={0,0,0,0,0} ;
char roads_Direction[5] ={0,0,0,0,0} ;

void Get_Path_plan(char start , char end)
{
    char roads_num = end - start ;
    find_distination_roads(roads_num ,start ,end);
    find_trip_direction();
}

char find_distination_roads(char roads_num , char start , char end)
{
    roads_points[5] ={0,0,0,0,0} ;
    roads_points[0] = start ;
     for (char i=1 ; i <= roads_num ; i++ )
     {
        roads_points[i] = start+1 ;
     }
}

void find_trip_direction(void)
{
    for(int i=0 ; i<5 ; i++)
    {
        char corner_flag = find_corner(roads_points[i]);
         if(!corner_flag)
         {
            if (roads_points[i] < roads_points[i+1])
            {
                roads_Direction[i] = "E";
            }
            else
            {
                roads_Direction[i] = "W";
            }
         }
         if(corner_flag)
         {
            if (roads_points[i] < roads_points[i+1])
            {
                roads_Direction[i] = "N";
            }
            else
            {
                roads_Direction[i] = "S";
            }
         }
        
    }

}

char find_corner(char find_corner)
{
    for(int J=0 ; J<4 ; J++)
         {
                if(find_corner == corner_arr[J])
                {
                    return 1;
                }
                else{
                    return 0; 
                }
         }
}