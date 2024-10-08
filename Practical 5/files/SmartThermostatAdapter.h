//
// Created by shnai on 2024/10/05.
//

#ifndef SMARTTHERMOSTATADAPTER_H
#define SMARTTHERMOSTATADAPTER_H

#include "SmartDevice.h"
#include "LegacyThermostat.h"

class SmartThermostatAdapter: public SmartDevice {
private:
    LegacyThermostat* legacyThermostat;

public:
    SmartThermostatAdapter(LegacyThermostat* legacyThermostat);
    void setTemperature(int temp);

    int getTemperature();
    void turnOn();
    void turnOff();
    std::string getStatus() override;
    std::string getDeviceType()override;
    void update() override;
};


#endif //SMARTTHERMOSTATADAPTER_H
