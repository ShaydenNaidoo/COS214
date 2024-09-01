//CONCRETE_FACTORY
#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H

#include "LegionFactory.h"
#include "WoodlandInfantry.h"
#include "WoodlandCavalry.h"
#include "WoodlandArtillery.h"

class WoodlandFactory : public LegionFactory{
    public:
        Infantry* createInfantry(int health, int defence, int damage, std::string name);        
        Cavalry* createCavalry(int health, int defence, int damage, std::string name, int speed);
        Artillery* createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy);

};

#endif