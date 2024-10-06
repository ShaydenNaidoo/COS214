#ifndef SETTEMPERATURE_H
#define SETTEMPERATURE_H

#include "Command.h"
#include "SmartDevice.h"
#include "Thermostat.h"
#include "SmartThermostatAdapter.h"
class SetTemperature : public Command {
    private:
    SmartDevice* device;
    int temperature;

public:
  SetTemperature(SmartDevice* device, int temp);

    void performAction() override ;
};

#endif // SETTEMPERATURE_H