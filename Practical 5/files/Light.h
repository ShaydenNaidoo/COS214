//
// Created by shnai on 2024/10/05.
//

#ifndef UNTITLED1_LIGHT_H
#define UNTITLED1_LIGHT_H
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


#endif //UNTITLED1_LIGHT_H
