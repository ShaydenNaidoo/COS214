#include "ToggleThermostatOn.h"

ToggleThermostatOn::ToggleThermostatOn(Thermostat *thermostat) {
    this->thermostat = thermostat;
}

void ToggleThermostatOn::performAction() {
    thermostat->turnOn();
    std::cout << "Thermostat is now " << thermostat->getStatus() << std::endl;
    std::cout << "Temperature is now " << thermostat->getTemperature() << std::endl;
    
}
