//CONCRETE_PRODUCT
#include "InfantryFactory.h"

InfantryFactory::InfantryFactory(int amountOfSoldiersPerUnit)
:SoldierFactory(amountOfSoldiersPerUnit){}

Soldiers* InfantryFactory::createUnit(int health, int damage, int defence, std::string name){
    if((damage <= defence || damage <= health) || (defence > health) || (health <= 0)) return nullptr;
    return new Infantry(health, damage, defence, name,this->amountOfSoldiersPerUnit);
}