//
// Created by shnai on 2024/10/05.
//

#include "Light.h"

Light::Light() {
    this->isOn = false;
}
void Light::turnOn() {
    this->isOn = true;
    this->status = "On";
}

void Light::turnOff() {
    this->isOn = false;
    this->status = "Off";
}

