//
// Created by shnai on 2024/10/05.
//

#include "LegacyThermostat.h"
#include <iostream>
LegacyThermostat::LegacyThermostat() {
    this->temperature = 0;
    this->isOn = false;
}


void LegacyThermostat::on() {
    this->isOn = true;
}

void LegacyThermostat::off() {
    this->isOn = false;
}

void LegacyThermostat::increaseTemperature() {
    if (isOn) {
        temperature++;
        std::cout << "Temperature is now " << temperature << std::endl;
    }
}

void LegacyThermostat::decreaseTemperature() {
    if (isOn) {
        temperature--;
        std::cout << "Temperature is now " << temperature << std::endl;
    }
}

bool LegacyThermostat::currentStatus() {
    return isOn;
}

int LegacyThermostat::getCurrentTemp() {
    return temperature;
}


