//CONCRETE_PRODUCT
#include "Boatman.h"
#include "Soldiers.h"
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
    std::cout << "Boatmen: " << this->getUnitName() << " are firing cannons at the enemy" << std::endl;
}
void Boatman::prepare(){
    std::cout << "Boatmen: " << this->getUnitName() << " are setting the sails for battle" << std::endl;
}
void Boatman::retreat() {
    std::cout << "Boatmen: " << this->getUnitName() << " are retreating back toward to the base shore" << std::endl;
}
void Boatman::rest() {

    std::cout << "Boatmen: " << this->getUnitName() << " are resting in the ships quaters" << std::endl;
}


