//
// Created by shnai on 2024/10/05.
//

#ifndef UNTITLED1_SMARTTHERMOSTATADAPTER_H
#define UNTITLED1_SMARTTHERMOSTATADAPTER_H

#include "SmartDevice.h"
#include "LegacyThermostat.h"

class SmartThermostatAdapter: public SmartDevice {
private:
    LegacyThermostat* legacyThermostat;

public:
    SmartThermostatAdapter(LegacyThermostat* legacyThermostat);
    void setTemperature(int temp);

    int getTemperature();

    std::string getStatus() override ;

    std::string getDeviceType()override;
};


#endif //UNTITLED1_SMARTTHERMOSTATADAPTER_H
