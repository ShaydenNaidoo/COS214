//CONCRETE_PRODUCT
#include "Boatman.h"

Boatman::Boatman(int health, int damage, int defence, std::string name)
:Soldiers(health,damage,defence,name,'B'){}

Boatman::Boatman(const Boatman &b):Soldiers(*this){}

Boatman::clonis(){
    //validation
    if(this == nullptr){ //if the current obj is null
        return nullptr; 
    }

 return new Boatman(*this);
}

void Boatman::execute() override { 
    if(this!=nullptr){
    std::cout << "Boatmen: " << this->getUnitName() << " are firing cannons at the enemy" << std::endl;
}else{
    return;
}
}
void Boatman::prepare() override{
    if(this==nullptr){
        return;
    }
    std::cout << "Boatmen: " << this->getUnitName() << " are setting the sails for battle" << std::endl;
}
void Boatman::retreat() override{
      if(this==nullptr){
        return;
    }
    std::cout << "Boatmen: " << this->getUnitName() << " are retreating back toward to the base shore" << std::endl;
}
void Boatman::rest() override {
      if(this==nullptr){
        return;
    }
    std::cout << "Boatmen: " << this->getUnitName() << " are resting in the ships quaters" << std::endl;
}

