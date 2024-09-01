//MAIN_MANAGER
#include "MainManager.h"

MainManager::MainManager(std::size_t specialization){
    factory.push_back(new RiverbankFactory());
    factory.push_back(new WoodlandFactory());
    factory.push_back(new OpenFieldFactory());
    
    if(specialization < 0 || specialization >= 3) this->specialization = 0;
    else this->specialization = specialization;

    command = new TacticalCommand();
    // command->chooseBestStrategy(this->specialization);

    riverbankLegion = new Legion();
    woodlandLegion = new Legion();
    openFieldLegion = new Legion();
}

bool MainManager::setSpecialization(std::size_t specialization){
    if(specialization < 0 || specialization >= 3) return false;

    this->specialization = specialization;
    this->command->chooseBestStrategy(this->specialization);

    return true;

}

void MainManager::setMemento(std::string label){
    this->command->setMemento(label);

}

void MainManager::getMemento(std::string label){
    this->command->getMemento(label);

}

std::string MainManager::getSpecialization(){
    switch (specialization){
        case 0:
            return "Riverbank";
            break;

        case 1:
            return "Woodland";
            break;

        case 2:
            return "Open Field";
            break;  
    
        default:
            return "";

    }

}



bool MainManager::createInfantry(int health, int defence, int damage, std::string name){
    if((health <= 0) || (defence < 0) || (damage < 0) || (name.length() <= 0) || (specialization < 0 || specialization >= 3)) return false;

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

bool MainManager::createCavalry(int health, int defence, int damage, std::string name, int speed){
    if((health <= 0) || (defence < 0) || (damage < 0) || (name.length() <= 0) || (speed <= 0) || (specialization < 0 || specialization >= 3)) return false;

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

bool MainManager::createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy){
  if ((health <= 0) || (defence < 0) || (damage < 0) || (name.empty()) || (range <= 0) || (accuracy <= 0) || (specialization < 0 || specialization >= 3)) return false;

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


void MainManager::LegionInfo(){
    std::cout << "\033[7;37mRiverbank Legion:\033[0m\n";
    riverbankLegion->printUnitDetails();
    std::cout << "\n\033[7;37mWoodland Legion\033[0m:\n";
    woodlandLegion->printUnitDetails();
    std::cout << "\n\033[7;37mOpen Field Legion:\033[0m\n";
    openFieldLegion->printUnitDetails();
}

void MainManager::LegionsAttack(){
    std::cout << "Riverbank Legion Attack:\n";
    riverbankLegion->attack();
    std::cout << "\nWoodland Legion Attack:\n";
    woodlandLegion->attack();
    std::cout << "\nOpen Field Legion Attack:\n";
    openFieldLegion->attack();
    std::cout << std::endl;

}

void MainManager::LegionAttack(){
    switch(specialization){
        case 0:
            std::cout << "Riverbank Legion Attack:\n";
            riverbankLegion->attack();
            break;

        case 1:
            std::cout << "Woodland Legion Attack:\n";
            woodlandLegion->attack();
            break;

        case 2:
            std::cout << "Open Field Legion Attack:\n";
            openFieldLegion->attack();
            break;

        default:
            std::cout << std::endl;
    }

    std::cout << std::endl;

}

void MainManager::LegionsMove(){
    std::cout << "Riverbank Legion Move:\n";
    riverbankLegion->move();
    std::cout << "\nWoodland Legion Move:\n";
    woodlandLegion->move();
    std::cout << "\nOpen Field Legion Move:\n";
    openFieldLegion->move();
    std::cout << std::endl;

}

void MainManager::LegionMove(){
        switch(specialization){
        case 0:
            std::cout << "Riverbank Legion Move:\n";
            riverbankLegion->move();
            break;

        case 1:
            std::cout << "Woodland Legion Move:\n";
            woodlandLegion->move();
            break;

        case 2:
            std::cout << "Open Field Legion Move:\n";
            openFieldLegion->move();
            break;

        default:
            std::cout << std::endl;
    }

    std::cout << std::endl;

}

void MainManager::setStrategy(int num){
    switch (num){
        case 0:
            this->command->setStrategy(new Ambush());
            break;

        case 1:
            this->command->setStrategy(new Flanking());
            break;

        case 2:
            this->command->setStrategy(new Fortification());
            break;
    
        default:
            this->command->setStrategy(new Ambush());
            
    }


}

void MainManager::chooseBestStrategy(){
    this->command->chooseBestStrategy(this->specialization);

}

void MainManager::executeStrategy(){
    switch (specialization)
    {
    case 0:
        this->command->executeStrategy(this->factory[this->specialization], this->riverbankLegion);
        break;
    
    case 1:
        this->command->executeStrategy(this->factory[this->specialization], this->woodlandLegion);
        break;

    case 2:
        this->command->executeStrategy(this->factory[this->specialization], this->openFieldLegion);
        break;
        
    default:
        break;
    }
    

}

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
    delete command;

}