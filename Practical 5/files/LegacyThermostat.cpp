//
// Created by shnai on 2024/10/05.
//

#include "LegacyThermostat.h"

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
    }
}

void LegacyThermostat::decreaseTemperature() {
    if (isOn) {
        temperature--;
    }
}

int LegacyThermostat::getCurrentTemp() {
    return temperature;
}

