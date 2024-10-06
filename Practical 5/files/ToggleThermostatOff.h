#ifndef TOGGLETHERMOSTATOFF_H
#define TOGGLETHERMOSTATOFF_H

#include "Thermostat.h"
#include "Command.h"
class ToggleThermostatOff: public Command{
    private:
    Thermostat *thermostat;
public:
    ToggleThermostatOff(Thermostat *thermostat);
    void execute();
};

#endif // TOGGLETHERMOSTATOFF_H