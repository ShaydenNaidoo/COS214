//CREATOR
#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory{
    private:
        int amountOfSoldiersPerUnit;

    public:
        SoldierFactory(int amountOfSoldiersPerUnit);
        int calculateTotalHealthPerUnit(Soldiers *soldier);
        int calculateTotalDamagePerUnit(Soldiers *soldier);
        int calculateTotalDefencePerUnit(Soldiers *soldier);

    protected:
        virtual Soldiers* createUnit(int health, int damage, int defence, std::string name) = 0;



};

#endif