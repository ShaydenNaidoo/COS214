//
// Created by shnai on 2024/10/05.
//

#include "Thermostat.h"
#include <iostream>

Thermostat::Thermostat():SmartDevice("Thermostat") {
    isOn = false;
    currtemp = 0;
}

void Thermostat::turnOn() {
    isOn = true;
    currtemp = 25;
}

void Thermostat::turnOff() {
    isOn = false;
    currtemp = 25;
}

std::string Thermostat::getStatus() {
    if (isOn) {
        return "ON";
    } else {
        return "OFF";
    }
}

std::string Thermostat::getDeviceType() {
    return "Thermostat";
}

int Thermostat::getTemperature() {
    return currtemp;
}

void Thermostat::setTemperature(int temperature) {
    currtemp = temperature;
}

void Thermostat::update() {
}
