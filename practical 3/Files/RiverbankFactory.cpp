//CONCRETE_FACTORY
#include "RiverbankFactory.h"

Infantry* RiverbankFactory::createInfantry(int health, int defence, int damage, std::string name){
    return new RiverbankInfantry(health, defence, damage, name);

} 

Cavalry* RiverbankFactory::createCavalry(int health, int defence, int damage, std::string name, int speed){
    return new RiverbankCavalry(health, defence, damage, name, speed);

}

Artillery* RiverbankFactory::createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy){
    return new RiverbankArtillery(health, damage, defence, name, range, accuracy);

}