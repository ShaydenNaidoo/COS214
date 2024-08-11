//CONCRETE_PRODUCT
#include "Boatman.h"
#include "Soldiers.h"
#include "MainManager.h"
Boatman::Boatman(int health, int damage, int defence, std::string name, int num)
:Soldiers(health,damage,defence,name,'B', num){}


Boatman::Boatman(const Boatman& other)
:Soldiers(other.getHealthPerSoldier(), other.getDamagePerSoldier(), other.getDefencePerSoldier(), other.getUnitName(),other.getType(),other.getCurrNumSoldiers()){
}

Soldiers* Boatman::clonis(){
    return new Boatman(*this);
}

void Boatman::execute()  { 
    std::cout << "\033[1;31mBoatmen execute: \033[0m\033[1;37m" << this->getUnitName() << "\033[0m\033[1;31m are firing cannons at the enemy!\033[0m" << std::endl;
}

void Boatman::prepare() {
    std::cout << "\033[1;34mBoatmen prepare: \033[0m\033[1;37m" << this->getUnitName() << "\033[0m\033[1;34m are setting the sails for battle!\033[0m" << std::endl;
}

void Boatman::retreat() {
    std::cout << "\033[1;33mBoatmen retreat: \033[0m\033[1;37m" << this->getUnitName() << "\033[0m\033[1;33m are retreating back toward the base shore!\033[0m" << std::endl;
}

void Boatman::rest() {
    std::cout << "\033[1;32mBoatmen rest: \033[0m\033[1;37m" << this->getUnitName() << "\033[0m\033[1;32m are resting in the ship's quarters!\033[0m" << std::endl;
}




