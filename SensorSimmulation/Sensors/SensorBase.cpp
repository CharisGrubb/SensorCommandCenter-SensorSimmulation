#include <iostream>
#include <string>

using namespace std;

//BASE CLASS FOR ALL SENSORS 
class Sensor{
    protected: 
        string sensor_id; #UUID
        string sensor_name;
    
    private:
        int poll_rate_sec = 120; //Default to poll every 120 seconds

}