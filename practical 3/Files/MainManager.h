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


class MainManager {
    private:
        std::vector<LegionFactory*> factory;
        std::map<std::size_t, std::vector<LegionUnit*>> legion;

    public:
        MainManager();
        bool createInfantry(int health, int defence, int damage, std::string name, std::size_t specialization);
        bool createCavalry(int health, int defence, int damage, std::string name, int speed, std::size_t specialization);
        bool createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy, std::size_t specialization);
       bool CreateLegion(std::size_t specialization);
        ~MainManager();

        void run();
};

#endif