//CREATOR
#include "SoldierFactory.h"

SoldierFactory::SoldierFactory(int amountOfSoldiersPerUnit){
    if(amountOfSoldiersPerUnit < 0) amountOfSoldiersPerUnit = 0;  
    this->amountOfSoldiersPerUnit = amountOfSoldiersPerUnit;
}

int SoldierFactory::calculateTotalHealthPerUnit(Soldiers *soldier){    
    return soldier->getCurrNumSoldiers() * soldier->getHealthPerSoldier();
}

int SoldierFactory::calculateTotalDamagePerUnit(Soldiers *soldier){
    return soldier->getCurrNumSoldiers() * soldier->getDamagePerSoldier();
}

int SoldierFactory::calculateTotalDefencePerUnit(Soldiers *soldier){
    return soldier->getCurrNumSoldiers() * soldier->getDefencePerSoldier();
}