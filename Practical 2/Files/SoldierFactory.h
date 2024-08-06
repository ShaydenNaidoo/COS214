//CREATOR
#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include <vector>
#include "Soldiers.h"

class SoldierFactory{
    friend class InfantryFactory;
    friend class ShieldBearerFactory; 
    friend class BoatmanFactory;

    private:
        std::vector<Soldiers*> soldiers;

    protected:
        Soldiers* getIndex(std::size_t x){
            if(!(x >= 0 && x < soldiers.size())) return nullptr;
            
            return soldiers[x];

        }

        virtual Soldiers* createUnit(int healthPerSoldier, int dammagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName) = 0;
        virtual int calculateTotalHealthPerUnit(Soldiers *soldier) = 0;
        virtual int calculateTotalDamagePerUnit(Soldiers *soldier) = 0;
        virtual int calculateTotalDefencePerUnit(Soldiers *soldier) = 0;


};

#endif