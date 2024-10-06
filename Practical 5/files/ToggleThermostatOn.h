#ifndef TOGGLETHERMOSTATON_H
#define TOGGLETHERMOSTATON_H
#include "Thermostat.h"
#include "Command.h"
class ToggleThermostatOn: public Command{
    private:
    Thermostat *thermostat;
public:
    ToggleThermostatOn(Thermostat *thermostat);
    void performAction() override;
};

#endif // TOGGLETHERMOSTATON_H