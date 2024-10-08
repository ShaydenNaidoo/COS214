#include "ToggleThermostatOff.h"
#include "Command.h"
#include "SmartDevice.h"
#include "Thermostat.h"
#include "SmartThermostatAdapter.h"
#include <iostream>

  ToggleThermostatOff::ToggleThermostatOff(SmartDevice* device) : device(device) {}

    void ToggleThermostatOff::performAction(){
     
        if (auto thermostat = dynamic_cast<Thermostat*>(device)) {
            thermostat->turnOff();
            std::cout << "Thermostat is now " << thermostat->getStatus() << std::endl;
        }
      
        else if (auto legacyThermostat = dynamic_cast<SmartThermostatAdapter*>(device)) {
            legacyThermostat->setTemperature(20);  
            std::cout << "Legacy Thermostat has been turned off. Current temperature is: " << legacyThermostat->getTemperature() << std::endl;
        }
        else {
            std::cout << "Error: Device type not recognized for thermostat action." << std::endl;
        }
    }

    void ToggleThermostatOff::addProcedure(Command* command) {
    
    }

    void ToggleThermostatOff::removeProcedure(Command* command) {
      
    }

    