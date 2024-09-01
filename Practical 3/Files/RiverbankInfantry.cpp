//CONCRETE_PRODUCT
#include "RiverbankInfantry.h"

RiverbankInfantry::RiverbankInfantry(int health, int defence, int damage, std::string name)
: Infantry(health, damage, defence, name, 'I', 'R', 100, 5, 4){
    
    this->rbBonus = 0.6;

    //hTHBonus = 5, armorBonus = 4;

}

void RiverbankInfantry::move() {
    std::cout << "WoodlandInfantry: is moving" << std::endl;

}

void RiverbankInfantry::attack() {
    std::cout << "WoodlandInfantry: is attacking" << std::endl;
    
}

void RiverbankInfantry::printDetails(){
    std::cout << "\033[1;37m" << this->getUnitName() << " [Riverbank Infantry Unit]\033[0m";

}

void RiverbankInfantry::printUnitDetails(){
    this->printDetails();
    std::cout << "\n\tHealth Per Soldier: \033[1;32m" << this->getHealthPerSoldier() << "\033[0m\n"
    << "\tDefence Per Soldier: \033[1;34m" << this->getDefencePerSoldier() << "\033[0m\n"
    << "\tDamage Per Soldier: \033[1;31m" << this->getDamagePerSoldier() << "\033[0m\n"
    << "\tCurrent Number of Soldiers: \033[1;37m" << this->getCurrNumSoldiers() << "\033[0m\n";
    
}

void RiverbankInfantry::add(UnitComponent* component){
    std::cout << "RiverbankInfantry: Cannot add to a leaf" << std::endl;
}

void RiverbankInfantry::remove(UnitComponent* component){
    std::cout << "RiverbankInfantry: Cannot remove from a leaf" << std::endl;
}

