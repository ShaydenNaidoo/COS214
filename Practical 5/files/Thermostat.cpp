//
// Created by shnai on 2024/10/05.
//

#include "Thermostat.h"

Thermostat::Thermostat() {
    isOn = false;
    status = "Off";
    currtemp = 0;
}

void Thermostat::turnOn() {
    isOn = true;
    status = "On";
    currtemp = 25;
}

void Thermostat::turnOff() {
    isOn = false;
    status = "Off";
    currtemp = 0;
}

std::string Thermostat::getStatus() {
    return status;
}

std::string Thermostat::getDeviceType() {
    return "Thermostat";
}

int Thermostat::getTemperature() {
    return currtemp;
}