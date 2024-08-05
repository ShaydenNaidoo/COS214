#include "InfantryFactory.h"

Soldiers* InfantryFactory::createUnit(int healthPerSoldier, int dammagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName){
    Soldiers *product =  new Infantry(healthPerSoldier,dammagePerSoldier,defencePerSoldier,amountOfSoldiersPerUnit,unitName);
    

    return nullptr;
}

int InfantryFactory::calculateTotalHealthPerUnit()
{
    return 0;
}

int InfantryFactory::calculateTotalDammagePerUnit()
{
    return 0;
}

int InfantryFactory::calculateTotalDefencePerUnit()
{
    return 0;
}
