//ABSTRACT_FACTORY
#ifndef LEGIONFACTORY_H
#define LEGIONFACTORY_H

#include <iostream>

#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

class LegionFactory {
    public:
        virtual Infantry* createInfantry(int health, int defence, int damage, std::string name) = 0;        
        virtual Cavalry* createCavalry(int health, int defence, int damage, std::string name, int speed) = 0;
        virtual Artillery* createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy) = 0;
    
};

#endif