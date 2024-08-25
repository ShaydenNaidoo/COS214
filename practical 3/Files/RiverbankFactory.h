//CONCRETE_FACTORY
#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H

#include "LegionFactory.h"
#include "RiverbankInfantry.h"
#include "RiverbankCavalry.h"
#include "RiverbankArtillery.h"

class RiverbankFactory : public LegionFactory{
    public:
        Infantry* createInfantry(int health, int defence, int damage, std::string name);        
        Cavalry* createCavalry(int health, int defence, int damage, std::string name, int speed);
        Artillery* createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy);



};

#endif