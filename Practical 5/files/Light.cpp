//
// Created by shnai on 2024/10/05.
//

#include "Light.h"

Light::Light() {
    this->isOn = false;
}
void Light::turnOn() {
    this->isOn = true;
}

void Light::turnOff() {
    this->isOn = false;
}

std::string Light::getStatus() {
    return isOn ? "On" : "Off";
}



std::string Light::getDeviceType() {
    return "Light";
}
