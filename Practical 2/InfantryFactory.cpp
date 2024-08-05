#include "InfantryFactory.h"

Soldiers* InfantryFactory::createUnit(int healthPerSoldier, int dammagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName){

    return new Infantry(healthPerSoldier,dammagePerSoldier,defencePerSoldier,amountOfSoldiersPerUnit,unitName);
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
