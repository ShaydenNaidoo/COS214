//CONCRETE_FACTORY
#include "OpenFieldInfantry.h"

OpenFieldInfantry::OpenFieldInfantry(int health, int damage, int defence, std::string name)
: Infantry(health, damage, defence, name, 'I', 'O', 100, 3, 4) {
    this->ofBonus = 2.5;

}

void OpenFieldInfantry::move() {
    std::cout << "OpenFieldInfantry: is moving" << std::endl;
}

void OpenFieldInfantry::attack() {
    std::cout << "OpenFieldInfantry: is attacking" << std::endl;
}

void OpenFieldInfantry::printDetails(){
    std::cout << "\033[1;37m" << this->getUnitName() << " [Open Field Infantry Unit]\033[0m";

}

void OpenFieldInfantry::printUnitDetails(){
    this->printDetails();
    std::cout << "\n\tHealth Per Soldier: \033[1;32m" << this->getHealthPerSoldier() << "\033[0m\n"
    << "\tDefence Per Soldier: \033[1;34m" << this->getDefencePerSoldier() << "\033[0m\n"
    << "\tDamage Per Soldier: \033[1;31m" << this->getDamagePerSoldier() << "\033[0m\n"
    << "\tCurrent Number of Soldiers: \033[1;37m" << this->getCurrNumSoldiers() << "\033[0m\n";
    
}