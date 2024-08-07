//CONCRETE_PRODUCT
#include "InfantryFactory.h"

InfantryFactory::InfantryFactory(int amountOfSoldiersPerUnit)
:SoldierFactory(amountOfSoldiersPerUnit){}

Soldiers* InfantryFactory::createUnit(int health, int damage, int defence, std::string name){
    return new Infantry(health, damage, defence, name);

}