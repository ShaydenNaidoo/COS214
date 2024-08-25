//CONCRETE_FACTORY
#include "OpenFieldFactory.h"

Infantry* OpenFieldFactory::createInfantry(int health, int defence, int damage, std::string name){
    return new OpenFieldInfantry(health, damage, defence, name);

}

Cavalry* OpenFieldFactory::createCavalry(int health, int defence, int damage, std::string name, int speed){
    return new OpenFieldCavalry(health, damage, defence, name, speed);

}


Artillery* OpenFieldFactory::createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy){
    return new OpenFieldArtillery(health, damage, defence, name, range, accuracy);

}