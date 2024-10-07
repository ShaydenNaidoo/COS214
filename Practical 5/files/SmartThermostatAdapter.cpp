//
// Created by shnai on 2024/10/05.
//

#include "SmartThermostatAdapter.h"
#include <iostream>
#include "LegacyThermostat.h"

SmartThermostatAdapter::SmartThermostatAdapter(LegacyThermostat* legacyThermostat)
    : SmartDevice("SmartLegacyThermostat") { 
    this->legacyThermostat = legacyThermostat;
}

void SmartThermostatAdapter::turnOn() {
    legacyThermostat->on();
    std::cout << "Legacy thermostat is turned on via adapter." << std::endl;
}

void SmartThermostatAdapter::turnOff() {
    legacyThermostat->off();
    std::cout << "Legacy thermostat is turned off via adapter." << std::endl;
}

void SmartThermostatAdapter::setTemperature(int temperature) {
    // Ensure the thermostat is on before setting temperature
    if (!legacyThermostat->currentStatus()) {
        std::cout << "Thermostat is off. Turning it on first." << std::endl;
        legacyThermostat->on();
    }

    int currentTemp = legacyThermostat->getCurrentTemp();
    
    while (currentTemp != temperature) {
        if (currentTemp < temperature) {
            legacyThermostat->increaseTemperature();
        } else if (currentTemp > temperature) {
            legacyThermostat->decreaseTemperature();
        }
        currentTemp = legacyThermostat->getCurrentTemp();
    }
    std::cout << "Temperature set to " << temperature << " via adapter." << std::endl;
}

std::string SmartThermostatAdapter::getStatus() {
    return legacyThermostat->currentStatus() ? "On" : "Off"; 
}

std::string SmartThermostatAdapter::getDeviceType() {
    return "SmartLegacyThermostat"; 
}

int SmartThermostatAdapter::getTemperature() {
    return legacyThermostat->getCurrentTemp();
}
