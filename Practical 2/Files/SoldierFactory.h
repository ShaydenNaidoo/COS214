//CREATOR
#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory{
    private:
        int amountOfSoldiersPerUnit;

    protected:
        SoldierFactory(int amountOfSoldiersPerUnit);
        int calculateTotalHealthPerUnit(Soldiers *soldier);
        int calculateTotalDamagePerUnit(Soldiers *soldier);
        int calculateTotalDefencePerUnit(Soldiers *soldier);
        int getAmountOfSoldiersPerUnit(){return this->amountOfSoldiersPerUnit;}
        virtual Soldiers* createUnit(int health, int damage, int defence, std::string name) = 0;



};

#endif