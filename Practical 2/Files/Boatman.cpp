//CONCRETE_PRODUCT
#include "Boatman.h"
#include "Soldiers.h"
#include "FactoryManager.h"
Boatman::Boatman(int health, int damage, int defence, std::string name)
:Soldiers(health,damage,defence,name,'B'){}


Boatman::Boatman(const Boatman& other)
:Soldiers(other.getHealthPerSoldier(), other.getDamagePerSoldier(), other.getDefencePerSoldier(), other.getUnitName(),other.getType()){
}

Soldiers* Boatman::clonis(){
        if(this == nullptr){ 
        return nullptr; 
    }
    int health = this->getHealthPerSoldier();
    int damage = this->getDamagePerSoldier();
    int defence = this->getDefencePerSoldier();
    std::string name = this->getUnitName();
    char type = this->getType();

    return new Boatman(*this);
}

void Boatman::execute()  { 
    std::cout << "\033[1;31mBoatmen: \033[0m\033[1;37m" << this->getUnitName() << "\033[0m\033[1;31m are firing cannons at the enemy!\033[0m" << std::endl;
}

void Boatman::prepare() {
    std::cout << "\033[1;34mBoatmen: \033[0m\033[1;37m" << this->getUnitName() << "\033[0m\033[1;34m are setting the sails for battle!\033[0m" << std::endl;
}

void Boatman::retreat() {
    std::cout << "\033[1;33mBoatmen: \033[0m\033[1;37m" << this->getUnitName() << "\033[0m\033[1;33m are retreating back toward the base shore!\033[0m" << std::endl;
}

void Boatman::rest() {
    std::cout << "\033[1;32mBoatmen: \033[0m\033[1;37m" << this->getUnitName() << "\033[0m\033[1;32m are resting in the ship's quarters!\033[0m" << std::endl;
}




