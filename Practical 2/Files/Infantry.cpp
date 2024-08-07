//CONCRETE_PRODUCT
#include "Infantry.h"

Infantry::Infantry(int health, int damage, int defence, std::string name)
:Soldiers(health, damage, defence, name, 'I'){
    this->retreated = false;
}

Infantry::Infantry(const Infantry &infantry):Soldiers(*this){}

Infantry::clonis(){
    //validation
    if(this == nullptr){ //if the current obj is null
        return nullptr; 
    }

 return new Infantry(*this);
}

void Infantry::execute() override { 
    if(this!=nullptr){
    std::cout << "Infantry: " << this->getUnitName() << " is attacking the enemy" << std::endl;
}else{
    return;
}
}
void Infantry::prepare() override{
    if(this==nullptr){
        return;
    }
    std::cout << "Infantry: " << this->getUnitName() << " is getting into a compact attacking formation" << std::endl;
}
void Infantry::retreat() override{
      if(this==nullptr){
        return;
    }
    std::cout << "Infantry: " << this->getUnitName() << " is retreating back toward the base camp" << std::endl;
}
void Infantry::rest() override {
      if(this==nullptr){
        return;
    }
    std::cout << "Infantry: " << this->getUnitName() << " is resting at the base camp" << std::endl;
}




