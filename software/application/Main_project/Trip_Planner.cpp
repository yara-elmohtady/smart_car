// Trip planner Know the map and decide your start point and end point and sub points 
#include "Path_planning.h"
#include "Trip_Planner.h"

char Plan_Trip(char current , char start , char end , char * Trip_path_exe)
{
    if(current == start)
    {
        Get_Path_plan(start  ,  end , Trip_path_exe);
        return 1;
    }
    else
    {
         Get_Path_plan(current  ,  end , Trip_path_exe);
        return 2;
    }
}