#include "ToggleThermostatOff.h"

ToggleThermostatOff::ToggleThermostatOff(Thermostat *thermostat) {
    this->thermostat = thermostat;
}

void ToggleThermostatOff::execute() {
    thermostat->turnOff();
    std::cout << "Thermostat is now " << thermostat->getStatus() << std::endl;
}
