#ifndef SENSOR_H
#define SENSOR_H
#include <vector>
#include <iostream>
#include <algorithm>
#include "SmartDevice.h"

class SmartDevice;
class Sensor { 
    protected:
    std::vector<SmartDevice*> devices; 

public:
    void addDevice(SmartDevice* device);  
    void removeDevice(SmartDevice* device);  
    void notifyDevices();  
};

#endif // SENSOR_H
