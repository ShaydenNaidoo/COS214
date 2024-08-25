//MAIN_MANAGER
#include "MainManager.h"

MainManager::MainManager(){
    factory.push_back(new RiverbankFactory());
    factory.push_back(new WoodlandFactory());
    factory.push_back(new OpenFieldFactory());

}

bool MainManager::createInfantry(int health, int defence, int damage, std::string name, std::size_t specialization){
    if((health <= 0) || (defence < 0) || (damage < 0) || (name.length() <= 0) || (specialization < 0 || specialization >= 3)) return false;

    legion[specialization].push_back(factory[specialization]->createInfantry(health, defence, damage, name));
    
    return true;

}

bool MainManager::createCavalry(int health, int defence, int damage, std::string name, int speed, std::size_t specialization){
    if((health <= 0) || (defence < 0) || (damage < 0) || (name.length() <= 0) || (speed <= 0) || (specialization < 0 || specialization >= 3)) return false;

    legion[specialization].push_back(factory[specialization]->createCavalry(health, defence, damage, name, speed));

    return true;

}

bool MainManager::createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy, std::size_t specialization){
    if((health <= 0) || (defence < 0) || (damage < 0) || (name.length() <= 0) || (range <= 0) || (accuracy <= 0) || (specialization < 0 || specialization >= 3)) return false;

    legion[specialization].push_back(factory[specialization]->createArtillery(health, defence, damage, name, range, accuracy));

    return true;

}

MainManager::~MainManager(){
    if(factory.empty() != true){
        delete factory[0];
        delete factory[1];
        delete factory[2];

        factory.clear();

    }

    if(legion.empty() != true){
        std::map<std::size_t, std::vector<LegionUnit*>>::iterator x = legion.begin();

        for(x; x != legion.end(); x++){
            for(LegionUnit* y: x->second){
                delete y;

            }

            x->second.clear();

        }

    }

    legion.clear();

}