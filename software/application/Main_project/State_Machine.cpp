
#include "State_Machine.h"
#include "Client_Handler.h"
#include "Battery_Monitor.h"
#include "Location_System.h"
#include "Motion_vision.h"
#include "Moto_Driver.h"
#include "Path_planning.h"
#include "Trip_Planner.h"

// Global variables
char Battery_Status = 0 ; 
char Client_Request = 0 ;
float Current_Location[2] = {0,0};
float Vision_State =0; 

char Cur_location_letter =0 ;
char Start_point = 0 ;
char End_Point = 0 ;
char num_of_trips = 0 ;
char Trip_Path[4] ={0,0,0,0};
char Car_Direction = "N" ;
// Local Variables
char Cur_State = IDEL;
char Prev_state = IDEL;
char Cahring_Station = 'B' ;
void State_Macine_init()
{
    Cur_State = IDEL ;
    Motor_Driver_init();
    Motion_Vision_init();
    Client_Handler_init();
    Location_system_init();
}

void Set_State_Macine(char State)
{
    Prev_state = Cur_State ;
    Cur_State = State ; 
}

void Update_State_Macine()
{
    switch(Prev_state)
    {
        case IDEL:
            Prev_state = IDEL;
            Cur_State = REQ_HANDLE ;
            break;

        case REQ_HANDLE:
            Prev_state = REQ_HANDLE;
            Cur_State = TRIP_PLAN ;
            break;

        case PARKING:
            Prev_state = PARKING;
            Cur_State = IDEL ;
            break;

        case TRIP_PLAN:
            Prev_state = TRIP_PLAN;
            Cur_State = TRIP_EXE ;
            break;
        
        case OBSTCAL_AVOID:
            Prev_state = OBSTCAL_AVOID;
            Cur_State = TRIP_PLAN ;
            break;

        case CHARGING:
            Prev_state = CHARGING;
            Cur_State = TRIP_PLAN ;
            break;

        case REQ_CHARGING:
            Prev_state = REQ_CHARGING;
            Cur_State = CHARGING ;
            break;

        case TRIP_EXE:
            Prev_state = TRIP_EXE;
            Cur_State = PARKING ;
            break;

        default:
          Cur_State = IDEL ;
          break ;
    }
}

void State_Machine_main_Task()
{
    Update_State_Macine();
    if (Client_Request == 0)
    {
        Set_State_Macine(REQ_HANDLE);
        Client_Request = Get_Client_cmd();
        Start_point = Client_Request ;
    }
    if (Client_Request == 1)
    {
        Client_Request = Get_Client_cmd();
        End_Point = Client_Request ;
    }
    if (Client_Request == 'G')
    {
        Client_Request = Get_Client_cmd();
        Set_State_Macine(TRIP_PLAN);
    }
    else{
            Set_Client_Msg('S');
            Cur_location_letter = map_location( Current_Location[0] , Current_Location[1])
            num_of_trips = Plan_Trip(Cur_location_letter , Start_point , End_Point , &Trip_Path);
            Set_State_Macine(TRIP_EXE);
            while(1)
            {
            Adjust_Car_Direction(Car_Direction , Trip_Path[2]);
            if (Vision_State == 1}
             {
                Car_motion_stop();
                Car_motion_manipulation();
             }
             if(Battery_Status == 1)
             {
                Set_Client_Msg('L');
                Set_Client_Msg('R');
                Client_Request = Get_Client_cmd();
                if (Client_Request == 'G')
                {
                   Set_State_Macine(CHARGING); 
                   Cur_location_letter = map_location( Current_Location[0] , Current_Location[1]);
                   num_of_trips = Plan_Trip(Cur_location_letter , Cur_location_letter , Cahring_Station , &Trip_Path);

                }
             }
            Cur_location_letter = map_location( Current_Location[0] , Current_Location[1])
            if(End_Point == Cur_location_letter)
            {
                Set_Client_Msg('Z');
                break ;
            }
            }
    }


}


void Adjust_Car_Direction(char cur , char Dir)
{
    switch(Dir)
        {
            case 'N':
                if(cur == 'N')
                 {Car_motion_forward(255);}
                 if(cur == 'S')
                 {Car_motion_turn_right(255);
                 Car_motion_turn_right();
                 }
                 if(cur == 'E')
                 {Car_motion_turn_left();}
                 if(cur == 'W')
                 {Car_motion_turn_right();}
                 Car_Direction = 'N';
            break;
            case 'S':
                if(cur == 'S')
                 {Car_motion_forward(255);}
                 if(cur == 'N')
                 {Car_motion_turn_right(255);
                 Car_motion_turn_right();
                 }
                 if(cur == 'E')
                 {Car_motion_turn_left();}
                 if(cur == 'W')
                 {Car_motion_turn_right();}
                 Car_Direction = 'S';
            break;
            case 'E':
                if(cur == 'E')
                 {Car_motion_forward(255);}
                 if(cur == 'W')
                 {Car_motion_turn_right(255);
                 Car_motion_turn_right();
                 }
                 if(cur == 'S')
                 {Car_motion_turn_left();}
                 if(cur == 'N')
                 {Car_motion_turn_right();}
                 Car_Direction = 'E';
            break;
            case 'W':
                if(cur == 'W')
                 {Car_motion_forward(255);}
                 if(cur == 'E')
                 {Car_motion_turn_right(255);
                 Car_motion_turn_right();
                 }
                 if(cur == 'N')
                 {Car_motion_turn_left();}
                 if(cur == 'S')
                 {Car_motion_turn_right();}
                 Car_Direction = 'W';
            break;
            default :
            break;
        }
}

void State_Machine_Sub_Task()
{
    Battery_Status =  Check_Battery();
    Client_Request = Get_Client_cmd();
    Get_Location(&Current_Location[0] , &Current_Location[1] );
    Vision_State = Motion_Vision_Check();
}