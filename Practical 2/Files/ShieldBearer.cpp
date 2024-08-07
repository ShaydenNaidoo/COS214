//CONCRETE_PRODUCT
#include "ShieldBearer.h"

ShieldBearer::ShieldBearer(int health, int damage, int defence, std::string name)
:Soldiers(health,damage,defence,name,'S'){}

ShieldBearer::ShieldBearer(const Boatman &boatman):Soldiers(*this){}

ShieldBearer::clonis(){
    //validation
    if(this == nullptr){ //if the current obj is null
        return nullptr; 
    }

 return new ShieldBearer(*this);
}

void ShieldBearer::execute() override { 
    if(this!=nullptr){
    std::cout << "ShieldBearers: " << this->getUnitName() << " are blocking enemy attacks\n" << std::endl;
}else{
    return;
}
}
void ShieldBearer::prepare() override{
    if(this==nullptr){
        return;
    }
    std::cout << "ShieldBearers: " << this->getUnitName() << " are forming a defensive position in front of infantry\n" << std::endl;
}
void ShieldBearer::retreat() override{
      if(this==nullptr){
        return;
    }
    std::cout << "ShieldBearers: " << this->getUnitName() << "are retreating with shields raised high\n" << std::endl;
}
void ShieldBearer::rest() override {
      if(this==nullptr){
        return;
    }
    std::cout << "ShieldBearers: " << this->getUnitName() << " are resting under their shields\n" << std::endl;
}