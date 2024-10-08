
#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <string>
#include <iostream>
class SmartDevice {
protected:
    std::string deviceType;
public:
    SmartDevice(std::string deviceType) : deviceType(deviceType) {}
    virtual std::string getStatus() = 0;
    virtual std::string getDeviceType() = 0;
    virtual void update() = 0;
};


#endif //SMARTDEVICE_H
