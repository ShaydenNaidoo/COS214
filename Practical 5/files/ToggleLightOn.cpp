//
// Created by shnai on 2024/10/06.
//

#include "ToggleLightOn.h"

ToggleLightOn::ToggleLightOn(Light *light) {
    this->light = light;
}

void ToggleLightOn::performAction() {
    light->turnOn();
    std::cout << "Light is now " << light->getStatus() << std::endl;
}

