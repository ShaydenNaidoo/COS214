//CONCRETE_PRODUCT
#include "OpenFieldCavalry.h"

OpenFieldCavalry::OpenFieldCavalry(int health, int damage, int defence, std::string name, int speed)
: Cavalry(health, damage, defence, name, 'C', 'O', 100, speed, 3.5) {
    this->ofBonus = 4.2;

}

void OpenFieldCavalry::move() {
    std::cout << "OpenFieldCavalry: is moving" << std::endl;

}

void OpenFieldCavalry::attack() {
    std::cout << "OpenFieldCavalry: is attacking" << std::endl;
    
}

void OpenFieldCavalry::printDetails(){
    std::cout << "\033[1;37m" << this->getUnitName() << " [Open Field Cavalry Unit]\033[0m";

}

void OpenFieldCavalry::printUnitDetails(){
    this->printDetails();
    std::cout << "\n\tHealth Per Soldier: \033[1;32m" << this->getHealthPerSoldier() << "\033[0m\n"
    << "\tDefence Per Soldier: \033[1;34m" << this->getDefencePerSoldier() << "\033[0m\n"
    << "\tDamage Per Soldier: \033[1;31m" << this->getDamagePerSoldier() << "\033[0m\n"
    << "\tSpeed: \033[1;35m" << this->getSpeed() << "\033[0m\n"
    << "\tCurrent Number of Soldiers: \033[1;37m" << this->getCurrNumSoldiers() << "\033[0m\n";
    
}

void OpenFieldCavalry::add(UnitComponent* component){
    std::cout << "OpenFieldCavalry: Cannot add to a leaf" << std::endl;
}


void OpenFieldCavalry::remove(UnitComponent* component){
    std::cout << "OpenFieldCavalry: Cannot remove from a leaf" << std::endl;
}
