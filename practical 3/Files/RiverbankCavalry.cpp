//CONCRETE_PRODUCT
#include "RiverbankCavalry.h"

RiverbankCavalry::RiverbankCavalry(int health, int defence, int damage, std::string name, int speed)
: Cavalry(health, defence, damage, name, 'C', 'R', 100, speed, 5.6) {
    this->rbBonus = 4;

}

void RiverbankCavalry::move() {
    std::cout << "RiverbankCavalry: is moving" << std::endl;
}

void RiverbankCavalry::attack() {
    std::cout << "RiverbankCavalry: is attacking" << std::endl;
}

void RiverbankCavalry::printDetails(){
    std::cout << "\033[1;37m" << this->getUnitName() << " [Riverbank Cavalry Unit]\033[0m";

}

void RiverbankCavalry::printUnitDetails(){
    this->printDetails();
    std::cout << "\n\tHealth Per Soldier: \033[1;32m" << this->getHealthPerSoldier() << "\033[0m\n"
    << "\tDefence Per Soldier: \033[1;34m" << this->getDefencePerSoldier() << "\033[0m\n"
    << "\tDamage Per Soldier: \033[1;31m" << this->getDamagePerSoldier() << "\033[0m\n"
    << "\tSpeed: \033[1;35m" << this->getSpeed() << "\033[0m\n"
    << "\tCurrent Number of Soldiers: \033[1;37m" << this->getCurrNumSoldiers() << "\033[0m\n";
    
}

void RiverbankCavalry::add(UnitComponent* component){
    std::cout << "RiverbankCavalry: Cannot add to a leaf" << std::endl;
}

void RiverbankCavalry::remove(UnitComponent* component){
    std::cout << "RiverbankCavalry: Cannot remove from a leaf" << std::endl;
}

