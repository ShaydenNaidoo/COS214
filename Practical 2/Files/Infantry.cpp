//CONCRETE_PRODUCT
#include "Infantry.h"
#include "Soldiers.h"
#include <iostream>
#include <string>

Infantry::Infantry(int health, int damage, int defence, std::string name, int currSold)
:Soldiers(health, damage, defence, name, 'I', currSold){
}

Infantry::Infantry(const Infantry& other)
:Soldiers(other.getHealthPerSoldier(), other.getDamagePerSoldier(), other.getDefencePerSoldier(), other.getUnitName(),other.getType()){
}

Soldiers* Infantry::clonis(){
    if(this == nullptr){ 
        return nullptr; 
    }
    int health = this->getHealthPerSoldier();
    int damage = this->getDamagePerSoldier();
    int defence = this->getDefencePerSoldier();
    std::string name = this->getUnitName();
    char type = this->getType();
    return new Infantry(*this);
}

void Infantry::execute() { 
    std::cout << "\033[1;31mInfantry execute: " << this->getUnitName() << " is combatting the enemy\033[0m" << std::endl;
}

void Infantry::prepare() {
    std::cout << "\033[1;33mInfantry prepare: " << this->getUnitName() << " is forming a tight attacking formation\033[0m" << std::endl;
}

void Infantry::retreat() {
    std::cout << "\033[1;35mInfantry retreat: " << this->getUnitName() << " is retreating back toward the base camp\033[0m" << std::endl;
}

void Infantry::rest() {
    std::cout << "\033[1;34mInfantry rest: " << this->getUnitName() << " is resting at the base camp\033[0m" << std::endl;
}




