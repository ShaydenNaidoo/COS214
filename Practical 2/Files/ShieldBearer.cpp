//CONCRETE_PRODUCT
#include "ShieldBearer.h"

ShieldBearer::ShieldBearer(int health, int damage, int defence, std::string name, int currSold)
:Soldiers(health,damage,defence,name,'S',currSold){}

ShieldBearer::ShieldBearer(const ShieldBearer& other)
:Soldiers(other.getHealthPerSoldier(), other.getDamagePerSoldier(), other.getDefencePerSoldier(), other.getUnitName(),other.getType(), other.getCurrNumSoldiers()){

}

Soldiers* ShieldBearer::clonis(){
    return new ShieldBearer(*this);
}

void ShieldBearer::execute()  { 
    std::cout << "\033[1;32mShieldBearers execute: " << this->getUnitName() << " are blocking enemy attacks\033[0m" << std::endl;
}

void ShieldBearer::prepare() {
    std::cout << "\033[1;34mShieldBearers prepare: " << this->getUnitName() << " are forming a defensive position in front of infantry\033[0m" << std::endl;
}

void ShieldBearer::retreat() {
    std::cout << "\033[1;33mShieldBearers retreat: " << this->getUnitName() << " are retreating with shields raised high\033[0m" << std::endl;
}

void ShieldBearer::rest() {
    std::cout << "\033[1;37mShieldBearers rest: " << this->getUnitName() << " are resting under their shields\033[0m" << std::endl;
}
