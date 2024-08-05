//CREATOR
#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory{
    private:
        Soldiers *soldiers;

    protected:
        virtual Soldiers* createUnit(int healthPerSoldier, int dammagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName) = 0;
        virtual int calculateTotalHealthPerUnit() = 0;
        virtual int calculateTotalDammagePerUnit() = 0;
        virtual int calculateTotalDefencePerUnit() = 0;

};

#endif