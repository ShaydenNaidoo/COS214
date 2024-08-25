//CONCRETE_PRODUCT
#include "WoodlandCavalry.h"

WoodlandCavalry::WoodlandCavalry(int health, int damage, int defence, std::string name, int speed)
: Cavalry(health, damage, defence, name, 'C', 'W', 100, speed, 3.5) {
    this->wBonus = 4.5;
    
}

void WoodlandCavalry::move() {
    std::cout << "WoodlandCavalry: is moving" << std::endl;
}

void WoodlandCavalry::attack() {
    std::cout << "WoodlandCavalry: is attacking" << std::endl;
}

void WoodlandCavalry::printDetails(){
    std::cout << "\033[1;37m" << this->getUnitName() << " [Woodland Cavalry Unit]\033[0m";

}

void WoodlandCavalry::printUnitDetails(){
    this->printDetails();
    std::cout << "\n\tHealth Per Soldier: \033[1;32m" << this->getHealthPerSoldier() << "\033[0m\n"
    << "\tDefence Per Soldier: \033[1;34m" << this->getDefencePerSoldier() << "\033[0m\n"
    << "\tDamage Per Soldier: \033[1;31m" << this->getDamagePerSoldier() << "\033[0m\n"
    << "\tSpeed: \033[1;35m" << this->getSpeed() << "\033[0m\n"
    << "\tCurrent Number of Soldiers: \033[1;37m" << this->getCurrNumSoldiers() << "\033[0m\n";
    
}