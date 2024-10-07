#ifndef TOGGLETHERMOSTATOFF_H
#define TOGGLETHERMOSTATOFF_H

#include "Thermostat.h"
#include "Command.h"
#include "SmartDevice.h"

class ToggleThermostatOff: public Command{
    private:
    SmartDevice *device;
public:
    ToggleThermostatOff(SmartDevice* device);
    void performAction() override;
};

#endif // TOGGLETHERMOSTATOFF_H