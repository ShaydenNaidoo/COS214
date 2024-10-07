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
    if (isOn&&temperature<30) {
        temperature++;
        std::cout << "Temperature is now " << temperature << std::endl;
    }else{
        std::cout << "Temperature is at maximum" << std::endl;
    }
}

void LegacyThermostat::decreaseTemperature() {
    if (isOn && temperature > 0) {
        temperature--;
        std::cout << "Temperature is now " << temperature << std::endl;
    }else {
        std::cout << "Temperature is at minimum" << std::endl;
    }
}

int LegacyThermostat::getCurrentTemp() {
    return temperature;
}

