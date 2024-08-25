//CONCRETE_FACTORY
#include "WoodlandFactory.h"

Infantry* WoodlandFactory::createInfantry(int health, int defence, int damage, std::string name){
    return new WoodlandInfantry(health, damage, defence, name);

}        


Cavalry* WoodlandFactory::createCavalry(int health, int defence, int damage, std::string name, int speed){
    return new WoodlandCavalry(health, damage, defence, name, speed);

}

Artillery* WoodlandFactory::createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy){
    return new WoodlandArtillery(health, damage, defence, name, range, accuracy);

}