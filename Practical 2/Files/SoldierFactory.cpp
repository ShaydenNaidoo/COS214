//CREATOR
#include "SoldierFactory.h"

SoldierFactory::SoldierFactory(int amountOfSoldiersPerUnit){
    this->amountOfSoldiersPerUnit = amountOfSoldiersPerUnit;

}

int SoldierFactory::calculateTotalHealthPerUnit(Soldiers *soldier){    
    return this->amountOfSoldiersPerUnit * soldier->getHealthPerSoldier();

}

int SoldierFactory::calculateTotalDamagePerUnit(Soldiers *soldier){
    return this->amountOfSoldiersPerUnit * soldier->getDamagePerSoldier();
}

int SoldierFactory::calculateTotalDefencePerUnit(Soldiers *soldier){
    return this->amountOfSoldiersPerUnit * soldier->getDefencePerSoldier();

}