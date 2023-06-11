#include <TinyGPS++.h>



struct Location GPS_Get_location(TinyGPSPlus gps) {
    static float Position[2];
    struct Location Cur_Location;
    while (ss.available() > 0){
    gps.encode(ss.read());
    if (gps.location.isUpdated()){

      Cur_Location.latitude = gps.location.lat();
  
      Cur_Location.longtude = gps.location.lng();

      return Cur_Location;
    }
  }
   

}







