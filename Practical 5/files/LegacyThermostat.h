//
// Created by shnai on 2024/10/05.
//

#ifndef UNTITLED1_LEGACYTHERMOSTAT_H
#define UNTITLED1_LEGACYTHERMOSTAT_H

#include "LegacyDevice.h"
class LegacyThermostat: public LegacyDevice {
private:
    int temperature;
    bool isOn;
    
public:
    LegacyThermostat();
    void on() override;
    void off() override;

    void increaseTemperature();
    void decreaseTemperature();

    int getCurrentTemp() ;
};


#endif //UNTITLED1_LEGACYTHERMOSTAT_H
