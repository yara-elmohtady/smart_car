// Roads 
#define Road_AB E
#define Road_BC E
#define Road_CD S
#define Road_DE W
#define Road_EF W
#define Road_FA N
#define Road_FE E
#define Road_ED E
#define Road_DC N
#define Road_CB W
#define Road_BA W
#define Road_AF S

void Get_Path_plan(char start , char end , char * Trip_path_exe);
void Define_start_stop_cordinate(char start , char end);
void Define_Path_plan(void);

//path = Endpoint-Start point 
// Endpoint_Y - StartpointY =  {if -ve -> s if +ve -> N } (value of move )
// Endpoint_X - StartpoinXY =  {if -ve -> W if +ve -> E } (value of move )
/*
A (1 , 2 )              B (2 , 2 ) {charging}          C (3 , 2 )    

                                  |N
                                  |
              W                   |                    E
             ---------------------|---------------------
                                  |
                                  |
                                  |S


F (1 , 1 )             E (2 , 1 )                    D (3 , 1 ) 

*/


       