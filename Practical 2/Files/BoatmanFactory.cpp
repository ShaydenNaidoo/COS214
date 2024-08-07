//CONCRETE_CREATOR
#include "BoatmanFactory.h"

BoatmanFactory::BoatmanFactory(int amountOfSoldiersPerUnit)
:SoldierFactory(amountOfSoldiersPerUnit){}

Soldiers* BoatmanFactory::createUnit(int health, int damage, int defence, std::string name){
    return new Boatman(health, damage, defence, name);

}