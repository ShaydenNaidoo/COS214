//CONCRETE_PRODUCT
#include "WoodlandArtillery.h"

WoodlandArtillery::WoodlandArtillery(int health, int damage, int defence, std::string name, int range, int accuracy)
: Artillery(health, damage, defence, name, 'A', 'W', 100, range, accuracy) {
    this->wBonus = 3.4;

}

void WoodlandArtillery::move() {
    std::cout << "WoodlandArtillery: is moving" << std::endl;
}

void WoodlandArtillery::attack() {
    std::cout << "WoodlandArtillery: is attacking" << std::endl;
}

void WoodlandArtillery::printDetails(){
    std::cout << "\033[1;37m" << this->getUnitName() << " [Woodland Artillery Unit]\033[0m";

}

void WoodlandArtillery::printUnitDetails(){
    this->printDetails();
    std::cout << "\n\tHealth Per Soldier: \033[1;32m" << this->getHealthPerSoldier() << "\033[0m\n"
    << "\tDefence Per Soldier: \033[1;34m" << this->getDefencePerSoldier() << "\033[0m\n"
    << "\tDamage Per Soldier: \033[1;31m" << this->getDamagePerSoldier() << "\033[0m\n"
    << "\tRange: \033[1;35m" << this->getRange() << "\033[0m\n"
    << "\tAccuracy: \033[1;35m" << this->getAccuracy() << "\033[0m\n"
    << "\tCurrent Number of Soldiers: \033[1;37m" << this->getCurrNumSoldiers() << "\033[0m\n";
    
}

void WoodlandArtillery::add(UnitComponent* component){
    std::cout << "WoodlandArtillery: Cannot add to a leaf" << std::endl;
}

void WoodlandArtillery::remove(UnitComponent* component){
    std::cout << "WoodlandArtillery: Cannot remove from a leaf" << std::endl;
}
