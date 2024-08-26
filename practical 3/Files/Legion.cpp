
#include "Legion.h"
#include <algorithm>
#include <iostream>
#include "UnitComponent.h"



void Legion::move() {
    for (UnitComponent* component : components) {
        component->move();
    }
}

void Legion::attack() {
    for (UnitComponent* component : components) {
        component->attack();
    }
}

void Legion::add(UnitComponent* component) {
    components.push_back(component);
}

void Legion::remove(UnitComponent* component) {
    components.erase(std::remove(components.begin(), components.end(), component), components.end());
}   

void Legion::printUnitDetails() {
    for (UnitComponent* component : components) {
        component->printUnitDetails();
    }
}


Legion::~Legion() {
    for (UnitComponent* component : components) {
        delete component;
    }
}
