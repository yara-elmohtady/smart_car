//
// Created by Mahmoud Elmohtady on 27/05/2023.
//

#ifndef GPS_DRIVER_H
#define GPS_DRIVER_H


struct Location GPS_Get_location();
void displayInfo();
struct Location
{
 float longtude ; 
 float latitude ;

};
#endif //C_PROGRAMMING_GPS_DRIVER_H
