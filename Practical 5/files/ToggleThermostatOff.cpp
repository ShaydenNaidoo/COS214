#include "ToggleThermostatOff.h"
#include "Command.h"
#include "SmartDevice.h"
#include "Thermostat.h"
#include "SmartThermostatAdapter.h"
#include <iostream>

  ToggleThermostatOff::ToggleThermostatOff(SmartDevice* device) : device(device) {}

    void ToggleThermostatOff::performAction(){
        // Try to cast to a modern Thermostat
        if (auto thermostat = dynamic_cast<Thermostat*>(device)) {
            thermostat->turnOff();
            std::cout << "Thermostat is now " << thermostat->getStatus() << std::endl;
        }
        // Try to cast to a SmartThermostatIntegrator (Legacy Thermostat)
        else if (auto legacyThermostat = dynamic_cast<SmartThermostatAdapter*>(device)) {
            legacyThermostat->setTemperature(10);  // For legacy, simulate turning off by lowering the temperature
            std::cout << "Legacy Thermostat has been turned off. Current temperature is: " << legacyThermostat->getTemperature() << std::endl;
        }
        else {
            std::cout << "Error: Device type not recognized for thermostat action." << std::endl;
        }
    }

    void ToggleThermostatOff::addProcedure(Command* command) {
        // Do nothing
    }

    void ToggleThermostatOff::removeProcedure(Command* command) {
        // Do nothing
    }

    