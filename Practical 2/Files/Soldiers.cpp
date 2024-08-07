//PRODUCT
#include "Soldiers.h"
Soldiers::Soldiers(){
    this->healthPerSoldier = 0;
    this->damagePerSoldier = 0;
    this->defencePerSoldier = 0;
    this->unitName = "";
    this->type = 'I';
}
Soldiers::Soldiers(int health, int damage, int defence, std::string name, char type){
    this->healthPerSoldier = health;
    this->damagePerSoldier = damage;
    this->defencePerSoldier = defence;
    this->unitName = name;
    this->type = type;

}
Soldiers::Soldiers(const Soldiers& s ){ //copy constructor for clone method
  
  //validation
  if(s==nullptr){
  return nullptr
  }
if(this == nullptr){
    return nullptr;
}
   if(this != &s){
    this->healthPerSoldier = s.healthPerSoldier;
    this->damagePerSoldier = s.damagePerSoldier;
    this->defencePerSoldier = s.defencePerSoldier;
    this->unitName = s.unitName;
    this->type = s.type;
   }
   return *this;

}

int Soldiers::getHealthPerSoldier(){
    return this->healthPerSoldier;

}

int Soldiers::getDamagePerSoldier(){
    return this->damagePerSoldier;

}

int Soldiers::getDefencePerSoldier(){
    return this->defencePerSoldier;

}

std::string Soldiers::getUnitName(){
    return this->unitName;

}

char Soldiers::getType(){
    return this->type;

}
//TEMPLATE METHODS
void Soldiers::engage(){
    prepare();
    execute();
}
void Soldiers::disengage(){
    retreat();
    rest();
}

