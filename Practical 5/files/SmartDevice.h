
#ifndef UNTITLED1_SMARTDEVICE_H
#define UNTITLED1_SMARTDEVICE_H

#include <string>
#include <iostream>
class SmartDevice {
protected:
    std::string deviceType;
public:
    SmartDevice(std::string deviceType) : deviceType(deviceType) {}
    virtual std::string getStatus() = 0;
    virtual std::string getDeviceType() = 0;
};


#endif //UNTITLED1_SMARTDEVICE_H
