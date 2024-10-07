#ifndef TOGGLETHERMOSTATON_H
#define TOGGLETHERMOSTATON_H
#include "Thermostat.h"
#include "SmartDevice.h"
#include "Command.h"
class ToggleThermostatOn: public Command{
    private:
      SmartDevice *device;
public:
    ToggleThermostatOn(SmartDevice* device);
    void performAction() override;
    void addProcedure(Command* command) override;
    void removeProcedure(Command* command) override;
};

#endif // TOGGLETHERMOSTATON_H