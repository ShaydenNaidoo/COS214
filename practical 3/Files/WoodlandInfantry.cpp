//CONCRETE_PRODUCT
#include "WoodlandInfantry.h"

WoodlandInfantry::WoodlandInfantry(int health, int damage, int defence, std::string name)
: Infantry(health, damage, defence, name, 'I', 'W', 100, 3, 4) {
    this->wBonus = 3.5;

}

void WoodlandInfantry::move() {
    std::cout << "WoodlandInfantry: is moving" << std::endl;

}

void WoodlandInfantry::attack() {
    std::cout << "WoodlandInfantry: is attacking" << std::endl;

}

void WoodlandInfantry::printDetails(){
    std::cout << "\033[1;37m" << this->getUnitName() << " [Woodland Infantry Unit]\033[0m";

}

void WoodlandInfantry::printUnitDetails(){
    this->printDetails();
    std::cout << "\n\tHealth Per Soldier: \033[1;32m" << this->getHealthPerSoldier() << "\033[0m\n"
    << "\tDefence Per Soldier: \033[1;34m" << this->getDefencePerSoldier() << "\033[0m\n"
    << "\tDamage Per Soldier: \033[1;31m" << this->getDamagePerSoldier() << "\033[0m\n"
    << "\tCurrent Number of Soldiers: \033[1;37m" << this->getCurrNumSoldiers() << "\033[0m\n";
    
}
