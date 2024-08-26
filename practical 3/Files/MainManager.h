//MAIN_MANAGER
#ifndef MAINMANAGER_H
#define MAINMANAGER_H

#include <iostream>
#include <vector>
#include <map>

#include "LegionFactory.h"
#include "RiverbankFactory.h"
#include "WoodlandFactory.h"
#include "OpenFieldFactory.h"

#include "LegionUnit.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

#include "TacticalCommand.h"


class MainManager {
    private:
        std::vector<LegionFactory*> factory;
        std::map<std::size_t, std::vector<LegionUnit*>> legion;
        std::size_t specialization;
        TacticalCommand *command;


    public:
        MainManager(std::size_t specialization);
        bool setSpecialization(std::size_t specialization);
        std::string getSpecialization();
        bool createInfantry(int health, int defence, int damage, std::string name);
        bool createCavalry(int health, int defence, int damage, std::string name, int speed);
        bool createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy);
        ~MainManager();

        void run();
};

#endif