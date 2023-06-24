#include "Path_planning.h"

float Start_point[2] = {0,0} ;
float End_point[2] = {0,0} ;
float Current_point[2] ={0,0};
//
char vertical_distance = 0;
char Horizontal_distance = 0;
char vertical_direction = 0;
char Horizontal_direction = 0;  
//
char Trip_path[4] = {0,0,0,0};

void Get_Path_plan(char start , char end , char * Trip_path_exe)
{
    Define_start_stop_cordinate(start , end) ;
    Define_Path_plan();
    Trip_path[0] = vertical_distance;
    Trip_path[1] = Horizontal_distance;
    Trip_path[2] = vertical_direction;
    Trip_path[3] = Horizontal_direction;
    
    Trip_path_exe[0] = vertical_distance;
    Trip_path_exe[1] = Horizontal_distance;
    Trip_path_exe[2] = vertical_direction;
    Trip_path_exe[3] = Horizontal_direction;
}

void Define_start_stop_cordinate(char start , char end)
{
    switch(start)
    {
        case 'A':
            Start_point[0] = 1 ;
            Start_point[0] = 2 ;
            break;

        case 'B':
            Start_point[0] = 2 ;
            Start_point[0] = 2 ;
            break;

        case 'C':
            Start_point[0] = 3 ;
            Start_point[0] = 2 ;
            break;

        case 'D':
            Start_point[0] = 3 ;
            Start_point[0] = 1 ;
            break;

        case 'E':
            Start_point[0] = 2 ;
            Start_point[0] = 1 ;
            break;

        case 'F':
            Start_point[0] = 1 ;
            Start_point[0] = 1 ;
            break;

        default:
        break;
    }

    switch(end)
    {
        case 'A':
            End_point[0] = 1 ;
            End_point[0] = 2 ;
            break;

        case 'B':
            End_point[0] = 2 ;
            End_point[0] = 2 ;
            break;

        case 'C':
            End_point[0] = 3 ;
            End_point[0] = 2 ;
            break;

        case 'D':
            End_point[0] = 3 ;
            End_point[0] = 1 ;
            break;

        case 'E':
            End_point[0] = 2 ;
            End_point[0] = 1 ;
            break;

        case 'F':
            End_point[0] = 1 ;
            End_point[0] = 1 ;
            break;

        default:
        break;
    }
}


//path = Endpoint-Start point 
// Endpoint_Y - StartpointY =  {if -ve -> s if +ve -> N } (value of move )
// Endpoint_X - StartpoinXY =  {if -ve -> W if +ve -> E } (value of move )
// N = 0 and S 1
// E = 0 and W =1 
void Define_Path_plan(void)
{
    vertical_distance = End_point[1]  -  Start_point[1] ;
    Horizontal_distance = End_point[0]  -  Start_point[0] ;

    if(vertical_distance > 0)
    {
        vertical_direction = 'N';
    }
    else{
        vertical_direction = 'S';
    }
    if(Horizontal_distance > 0)
    {
        Horizontal_direction = 'E';
    }
    else{
        Horizontal_direction = 'W';
    }
    
}