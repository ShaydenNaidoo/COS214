//
// Created by shnai on 2024/10/06.
//

#include "ToggleLightOff.h"

ToggleLightOff::ToggleLightOff(Light *light) {
    this->light = light;
}

void ToggleLightOff::performAction() {
    light->turnOff();
    std::cout << "Light is now " << light->getStatus() << std::endl;
}
