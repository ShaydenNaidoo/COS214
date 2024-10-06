
#ifndef UNTITLED1_SMARTDEVICE_H
#define UNTITLED1_SMARTDEVICE_H

#include <string>
#include <iostream>
class SmartDevice {
protected:
    std::string deviceType;
    std::string state;
public:
    virtual std::string getStatus() = 0;
    virtual void performAction() = 0;

    virtual std::string getDeviceType() = 0;
    //virtual ~SmartDevice() = default;
};


#endif //UNTITLED1_SMARTDEVICE_H
