//
// Created by shnai on 2024/10/05.
//

#include "Light.h"
#include "SmartDevice.h"
Light::Light():SmartDevice("Light") {
    this->isOn = false;
}
void Light::turnOn() {
    this->isOn = true;
}

void Light::turnOff() {
    this->isOn = false;
}

std::string Light::getStatus() {
    return isOn ? "ON" : "OFF";
}



std::string Light::getDeviceType() {
    return "Light";
}

void Light::update() {
    turnOff();
}

