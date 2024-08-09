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
        void printUnits();
        void printSummary();
        

};


#endif