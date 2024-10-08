//
// Created by shnai on 2024/10/05.
//

#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include <string>
#include "SmartDevice.h"
class Thermostat: public SmartDevice {
private:
    int currtemp;
    bool isOn;
public:
    Thermostat();
    void turnOn();
    void turnOff();
    std::string getStatus() override;
    std::string getDeviceType() override;
    void update() override;
    void setTemperature(int temp);
    int getTemperature();
};


#endif //THERMOSTAT_H
