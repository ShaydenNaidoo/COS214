#include "InfantryFactory.h"

Soldiers* InfantryFactory::createUnit(int healthPerSoldier, int dammagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName){
    Soldiers *product =  new Infantry(healthPerSoldier,dammagePerSoldier,defencePerSoldier,amountOfSoldiersPerUnit,unitName);
    this->soldiers.push_back(product);

    return product;

}

Soldiers* InfantryFactory::getIndex(std::size_t x){
    return SoldierFactory::getIndex(x);
}
    
int InfantryFactory::calculateTotalHealthPerUnit(Soldiers *soldier){
    return soldier->getHealthPerSoldier() * soldier->getAmountOfSoldiersPerUnit();

}

int InfantryFactory::calculateTotalDamagePerUnit(Soldiers *soldier){
    return soldier->getDamagePerSoldier() * soldier->getAmountOfSoldiersPerUnit();

}

int InfantryFactory::calculateTotalDefencePerUnit(Soldiers *soldier){
    return soldier->getHealthPerSoldier() * soldier->getAmountOfSoldiersPerUnit();

}

