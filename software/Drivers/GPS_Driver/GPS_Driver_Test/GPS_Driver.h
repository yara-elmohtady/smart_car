//
// Created by Mahmoud Elmohtady on 27/05/2023.
//

#ifndef GPS_DRIVER_H
#define GPS_DRIVER_H

extern void GPS_init(SoftwareSerial GPS_Serial);
extern float * GPS_Get_location(TinyGPSPlus gps);

#endif //C_PROGRAMMING_GPS_DRIVER_H
