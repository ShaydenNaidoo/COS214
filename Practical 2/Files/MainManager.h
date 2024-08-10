//FACTORY_MANAGER
#ifndef MainManager_H
#define MainManager_H

#include <iostream>
#include <vector>
#include <map>

#include "Soldiers.h"
#include "Memento.h"
#include "SoldierFactory.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"

class MainManager{
    private:
        std::vector<SoldierFactory*> factory;
        std::vector<Soldiers*> soldiers;
        std::map<std::string, std::vector<Memento*>> mStack;

    public:
        MainManager(int amountOfSoldiersPerUnit);     
        bool createUnit(std::size_t type, int  health, int damage, int defence, std::string unitName);  
        int getAmountOfSoldiersPerUnit();
        void appendSoldier(Soldiers *soldier);
        Soldiers* operator[](std::size_t x);
        std::size_t numberOfUnits();
        void cloneSoldier(std::size_t x);
        void cloneSoldier();
        void printUnits();
        void printSummary();
        void printUnit(std::size_t x);  
        void titusComands();
        void militusMemento();
        bool militusMemento(Soldiers* soldier);
        void vivifaMemento();
        bool vivifaMemento(Soldiers* soldier);
        ~MainManager();
};


#endif