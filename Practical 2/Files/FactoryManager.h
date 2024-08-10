//FACTORY_MANAGER
#ifndef FACTORYMANAGER_H
#define FACTORYMANAGER_H

#include <iostream>
#include <vector>

#include "Soldiers.h"
#include "SoldierFactory.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"

class FactoryManager{
    private:
        std::vector<SoldierFactory*> factory;
        std::vector<Soldiers*> soldiers;

    public:
        FactoryManager(int amountOfSoldiersPerUnit);     
        bool createUnit(std::size_t type, int  health, int damage, int defence, std::string unitName);  
        int getAmountOfSoldiersPerUnit();
        void appendSoldier(Soldiers *soldier);
        Soldiers* operator[](std::size_t x);
        void cloneSoldier(std::size_t x);
        Soldiers* getSoldiers();
        void printUnits();
        void printSummary();
        void titusComands();
        ~FactoryManager();
};


#endif