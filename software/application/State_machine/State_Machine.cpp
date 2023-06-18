
#include "State_Machine.h"

char Cur_State = IDEL;
char Prev_state = IDEL;

void State_Macine_init()
{
    Cur_State = IDEL ;
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

void State_Machine_main()
{
    
}