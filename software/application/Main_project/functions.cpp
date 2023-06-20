char Check_Battery();




void Client_Handler_init();
void Get_Client_cmd();
void Set_Client_Msg(char cmd);





void Get_Location(float *longt , float *latit)


void Motion_Vision_init();
char Motion_Vision_Check();



void Motor_Driver_init();
void Car_motion_forward(int speed);
void Car_motion_backword(int speed);
void Car_motion_turn_right(int speed);
void Car_motion_turn_left(int speed);
void Car_motion_stop();


