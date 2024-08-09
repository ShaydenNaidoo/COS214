//CONCRETE_PRODUCT
#include "ShieldBearer.h"

ShieldBearer::ShieldBearer(int health, int damage, int defence, std::string name)
:Soldiers(health,damage,defence,name,'S'){}

ShieldBearer::ShieldBearer(const ShieldBearer& other)
:Soldiers(other.getHealthPerSoldier(), other.getDamagePerSoldier(), other.getDefencePerSoldier(), other.getUnitName(),other.getType()){

}

Soldiers* ShieldBearer::clonis(){
    if(this == nullptr){ 
        return nullptr; 
    }
    int health = this->getHealthPerSoldier();
    int damage = this->getDamagePerSoldier();
    int defence = this->getDefencePerSoldier();
    std::string name = this->getUnitName();
    char type = this->getType();
    return new ShieldBearer(*this);
}

void ShieldBearer::execute()  { 
 
    std::cout << "ShieldBearers: " << this->getUnitName() << " are blocking enemy attacks" << std::endl;
}
void ShieldBearer::prepare() {
 
    std::cout << "ShieldBearers: " << this->getUnitName() << " are forming a defensive position in front of infantry" << std::endl;
}
void ShieldBearer::retreat() {
    std::cout << "ShieldBearers: " << this->getUnitName() << "are retreating with shields raised high" << std::endl;
}
void ShieldBearer::rest(){
    std::cout << "ShieldBearers: " << this->getUnitName() << " are resting under their shields" << std::endl;
}