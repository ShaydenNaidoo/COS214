//CONCRETE_PRODUCT
#include "OpenFieldArtillery.h"

OpenFieldArtillery::OpenFieldArtillery(int health, int damage, int defence, std::string name, int range, int accuracy)
: Artillery(health, damage, defence, name,'A', 'O', 100, range, accuracy) {
    this->ofBonus = 3.5;

}

void OpenFieldArtillery::move() {
    std::cout << "OpenFieldArtillery: is moving" << std::endl;

}

void OpenFieldArtillery::attack() {
    std::cout << "OpenFieldArtillery: is attacking" << std::endl;

}

void OpenFieldArtillery::printDetails(){
    std::cout << "\033[1;37m" << this->getUnitName() << " [Open Field Artillery Unit]\033[0m";

}

void OpenFieldArtillery::printUnitDetails(){
    this->printDetails();
    std::cout << "\n\tHealth Per Soldier: \033[1;32m" << this->getHealthPerSoldier() << "\033[0m\n"
    << "\tDefence Per Soldier: \033[1;34m" << this->getDefencePerSoldier() << "\033[0m\n"
    << "\tDamage Per Soldier: \033[1;31m" << this->getDamagePerSoldier() << "\033[0m\n"
    << "\tRange: \033[1;35m" << this->getRange() << "\033[0m\n"
    << "\tAccuracy: \033[1;35m" << this->getAccuracy() << "\033[0m\n"
    << "\tCurrent Number of Soldiers: \033[1;37m" << this->getCurrNumSoldiers() << "\033[0m\n";
    
}
