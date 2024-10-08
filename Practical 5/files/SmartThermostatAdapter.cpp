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
    if (!legacyThermostat->currentStatus()) {  
        legacyThermostat->on();
        std::cout << "Legacy thermostat is turned on via adapter." << std::endl;
    }
}

void SmartThermostatAdapter::turnOff() {
    std::cout << "Turning off the legacy thermostat. Current temperature before turn off: " << legacyThermostat->getCurrentTemp() << "°C" << std::endl;
    if (legacyThermostat->currentStatus()) {
        legacyThermostat->off();
        std::cout << "Legacy thermostat turned off. Temperature remains: " << legacyThermostat->getCurrentTemp() << "°C" << std::endl;
    }
}
void SmartThermostatAdapter::setTemperature(int temperature) {
    if (!legacyThermostat->currentStatus()) {
        std::cout << "Thermostat is off. Turning it on first." << std::endl;
        legacyThermostat->on();
    }

    int currentTemp = legacyThermostat->getCurrentTemp();

    // Check for a reasonable range of temperature to avoid errors
    if (temperature < 0 || temperature > 35) {
        std::cout << "Error: Temperature out of bounds. Please set a value between 0 and 35." << std::endl;
        return;
    }

    // Set the temperature if the thermostat is on
    while (currentTemp != temperature && legacyThermostat->currentStatus()) {
        if (currentTemp < temperature) {
            legacyThermostat->increaseTemperature();
        } else if (currentTemp > temperature) {
            legacyThermostat->decreaseTemperature();
        }
        currentTemp = legacyThermostat->getCurrentTemp();  
    }
    std::cout << "Temperature set to " << temperature << "°C" << " via adapter." << std::endl;
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

void SmartThermostatAdapter::update() {
}
