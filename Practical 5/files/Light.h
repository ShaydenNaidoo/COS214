//
// Created by shnai on 2024/10/05.
//

#ifndef LIGHT_H
#define LIGHT_H
#include <string>
#include <iostream>
#include "SmartDevice.h"
class Light: public SmartDevice {
private:
    bool isOn;
public:
    Light();
    std::string getStatus() override;
    void turnOn();
    void turnOff();
    std::string getDeviceType() override;
    void update() override;
};


#endif //LIGHT_H
