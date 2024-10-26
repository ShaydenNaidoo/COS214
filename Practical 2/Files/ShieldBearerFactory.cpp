//CONCRETE_CREATOR
#include "ShieldBearerFactory.h"

ShieldBearerFactory::ShieldBearerFactory(int amountOfSoldiersPerUnit)
:SoldierFactory(amountOfSoldiersPerUnit){}


Soldiers* ShieldBearerFactory::createUnit(int health, int damage, int defence, std::string name){
    if((damage >= defence || damage >= health)) return nullptr;

    return new ShieldBearer(health, damage, defence, name, this->getAmountOfSoldiersPerUnit());

}