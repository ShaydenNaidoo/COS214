#include "ToggleThermostatOn.h"
#include "Command.h"
#include "SmartDevice.h"
#include "Thermostat.h"
#include "SmartThermostatAdapter.h"
#include <iostream>

 ToggleThermostatOn::ToggleThermostatOn(SmartDevice* device) : device(device) {}

void ToggleThermostatOn::performAction() {
// Try to cast to a modern Thermostat
        if (auto thermostat = dynamic_cast<Thermostat*>(device)) {
            thermostat->turnOn();
            std::cout << "Thermostat is now " << thermostat->getStatus() << std::endl;
            std::cout << "Temperature is now " << thermostat->getTemperature() << "°C" << std::endl;
        }
        // Try to cast to a SmartThermostatIntegrator (Legacy Thermostat)
        else if (auto legacyThermostat = dynamic_cast<SmartThermostatAdapter*>(device)) {
            legacyThermostat->setTemperature(20);  // For legacy, set a temperature (e.g., turn on with a default temp)
            std::cout << "Legacy Thermostat is now " << legacyThermostat->getStatus() << std::endl;
            std::cout << "Temperature is now " << legacyThermostat->getTemperature() << "°C" << std::endl;
        }
        else {
            std::cout << "Error: Device type not recognized for thermostat action." << std::endl;
        }
    
}

void ToggleThermostatOn::addProcedure(Command* command) {
    // Do nothing
}

void ToggleThermostatOn::removeProcedure(Command* command) {
    // Do nothing
}


