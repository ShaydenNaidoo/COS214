//
// Created by shnai on 2024/10/05.
//

#ifndef UNTITLED1_THERMOSTAT_H
#define UNTITLED1_THERMOSTAT_H
#include <string>
#include "SmartDevice.h"
class Thermostat: public SmartDevice {
private:
    bool temp;
    int currtemp;
    std::string status;
    bool isOn;
public:
    Thermostat();
    void Heat();
    void Cool();
    void turnOn();
    void turnOff();
    std::string getStatus() override;
    std::string getDeviceType() override;
};


#endif //UNTITLED1_THERMOSTAT_H
