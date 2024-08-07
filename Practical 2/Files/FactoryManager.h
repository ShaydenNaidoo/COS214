//FACTORY_MANAGER
#ifndef FACTORYMANAGER_H
#define FACTORYMANAGER_H

#include <iostream>
#include <vector>

#include "Soldiers.h"
#include "SoldierFactory.h"

class FactoryManager{
    private:
        std::vector<Soldiers*> soldiers;

    public:
        FactoryManager();       
        

};


#endif