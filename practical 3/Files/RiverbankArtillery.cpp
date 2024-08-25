//CONCRETE_PRODUCT
#include "RiverbankArtillery.h"

RiverbankArtillery::RiverbankArtillery(int health, int damage, int defence, std::string name, int range, int accuracy)
: Artillery(health, defence, damage, name, 'A', 'R', 100, range, accuracy){
    this->rbBonus = 3.5;

}
void RiverbankArtillery::move() {
    std::cout << "RiverbankArtillery: is moving" << std::endl;
}

void RiverbankArtillery::attack() {
    std::cout << "RiverbankArtillery: is attacking" << std::endl;
}

void RiverbankArtillery::printDetails(){
    std::cout << "\033[1;37m" << this->getUnitName() << " [Riverbank Artillery Unit]\033[0m";

}

void RiverbankArtillery::printUnitDetails(){
    this->printDetails();
    std::cout << "\n\tHealth Per Soldier: \033[1;32m" << this->getHealthPerSoldier() << "\033[0m\n"
    << "\tDefence Per Soldier: \033[1;34m" << this->getDefencePerSoldier() << "\033[0m\n"
    << "\tDamage Per Soldier: \033[1;31m" << this->getDamagePerSoldier() << "\033[0m\n"
    << "\tRange: \033[1;35m" << this->getRange() << "\033[0m\n"
    << "\tAccuracy: \033[1;35m" << this->getAccuracy() << "\033[0m\n"
    << "\tCurrent Number of Soldiers: \033[1;37m" << this->getCurrNumSoldiers() << "\033[0m\n";
    
}