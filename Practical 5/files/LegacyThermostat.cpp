//
// Created by shnai on 2024/10/05.
//

#include "LegacyThermostat.h"
#include <iostream>
LegacyThermostat::LegacyThermostat() {
    this->temperature = 20;
    this->isOn = false;
}


void LegacyThermostat::on() {
    this->isOn = true;
     this->temperature = 25;
}

void LegacyThermostat::off() {
    this->isOn = false;
     this->temperature = 20;
    std::cout << "Legacy thermostat is now off. Temperature remains: " << temperature << "°C" << std::endl;
}


void LegacyThermostat::increaseTemperature() {
    if (isOn) {
        temperature++;
        std::cout << "Temperature has increased to " << temperature << "°C" << std::endl;
    }
}

void LegacyThermostat::decreaseTemperature() {
    if (isOn) {
        temperature--;
        std::cout << "Temperature has decreased to " << temperature << "°C" << std::endl;
    }
}

bool LegacyThermostat::currentStatus() {
    return isOn;
}

int LegacyThermostat::getCurrentTemp() {
    return temperature;
}


