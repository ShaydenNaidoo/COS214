//CONCRETE_FACTORY
#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H

#include "LegionFactory.h"
#include "OpenFieldInfantry.h"
#include "OpenFieldCavalry.h"
#include "OpenFieldArtillery.h"

class OpenFieldFactory : public LegionFactory{
    public:
        Infantry* createInfantry(int health, int defence, int damage, std::string name);        
        Cavalry* createCavalry(int health, int defence, int damage, std::string name, int speed);
        Artillery* createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy);
        
};

#endif