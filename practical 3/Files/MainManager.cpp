//MAIN_MANAGER
#include "MainManager.h"
#include "Legion.h"
MainManager::MainManager(){
    factory.push_back(new RiverbankFactory());
    factory.push_back(new WoodlandFactory());
    factory.push_back(new OpenFieldFactory());
  riverbankLegion = new Legion();
    woodlandLegion = new Legion();
    openFieldLegion = new Legion();
}

bool MainManager::createInfantry(int health, int defence, int damage, std::string name, int specialization){
    if ((health <= 0) || (defence < 0) || (damage < 0) || (name.empty()) || (specialization >= factory.size())) return false;

    LegionUnit* infantry = factory[specialization]->createInfantry(health, defence, damage, name);

    switch(specialization) {
        case 0:
            riverbankLegion->add(infantry);
            break;
        case 1:
            woodlandLegion->add(infantry);
            break;
        case 2:
            openFieldLegion->add(infantry);
            break;
    }
    
    return true;

}

bool MainManager::createCavalry(int health, int defence, int damage, std::string name, int speed, int specialization){
      if ((health <= 0) || (defence < 0) || (damage < 0) || (name.empty()) || (speed <= 0) || (specialization >= factory.size())) return false;

    LegionUnit* cavalry = factory[specialization]->createCavalry(health, defence, damage, name, speed);

    switch(specialization) {
        case 0:
            riverbankLegion->add(cavalry);
            break;
        case 1:
            woodlandLegion->add(cavalry);
            break;
        case 2:
            openFieldLegion->add(cavalry);
            break;
    }

    return true;
}
void MainManager::LegionInfo(){
    std::cout << "Riverbank Legion:\n";
    riverbankLegion->printUnitDetails();
    std::cout << "\nWoodland Legion:\n";
    woodlandLegion->printUnitDetails();
    std::cout << "\nOpen Field Legion:\n";
    openFieldLegion->printUnitDetails();
}

void MainManager::LegionAttack(){
    std::cout << "Riverbank Legion Attack:\n";
    riverbankLegion->attack();
    std::cout << "\nWoodland Legion Attack:\n";
    woodlandLegion->attack();
    std::cout << "\nOpen Field Legion Attack:\n";
    openFieldLegion->attack();
}

void MainManager::LegionMove(){
     std::cout << "Riverbank Legion Move:\n";
    riverbankLegion->move();
    std::cout << "\nWoodland Legion Move:\n";
    woodlandLegion->move();
    std::cout << "\nOpen Field Legion Move:\n";
    openFieldLegion->move();
}


bool MainManager::createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy, int specialization){
  if ((health <= 0) || (defence < 0) || (damage < 0) || (name.empty()) || (range <= 0) || (accuracy <= 0) || (specialization >= factory.size())) return false;

    LegionUnit* artillery = factory[specialization]->createArtillery(health, defence, damage, name, range, accuracy);

    switch(specialization) {
        case 0:
            riverbankLegion->add(artillery);
            break;
        case 1:
            woodlandLegion->add(artillery);
            break;
        case 2:
            openFieldLegion->add(artillery);
            break;
    }

    return true;
}

// bool MainManager::CreateLegion(std::size_t specialization){
//     if((specialization < 0) || (specialization >= 3)) return false;

//     Legion* legion = new Legion();

//     for(LegionUnit* x: l){
//         legion->add(x);

//     }

//     return true;
// }

MainManager::~MainManager(){
    if(factory.empty() != true){
        delete factory[0];
        delete factory[1];
        delete factory[2];

        factory.clear();

    }
    delete riverbankLegion;
    delete woodlandLegion;
    delete openFieldLegion;

    // if(legion.empty() != true){
    //     std::map<std::size_t, std::vector<LegionUnit*>>::iterator x = legion.begin();

    //     for(x; x != legion.end(); x++){
    //         for(LegionUnit* y: x->second){
    //             delete y;

    //         }

    //         x->second.clear();

    //     }

    // }

    // legion.clear();

}