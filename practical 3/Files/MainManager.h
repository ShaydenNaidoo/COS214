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
#include "Legion.h"

#include "TacticalCommand.h"


class MainManager {
    private:
        std::vector<LegionFactory*> factory;
        // std::map<std::size_t, std::vector<LegionUnit*>> legion;
    Legion* riverbankLegion; 
    Legion* woodlandLegion;
    Legion* openFieldLegion;
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
        MainManager();
        bool createInfantry(int health, int defence, int damage, std::string name, int specialization);
        bool createCavalry(int health, int defence, int damage, std::string name, int speed, int specialization);
        bool createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy, int specialization);
        void LegionInfo();
        void LegionAttack();
        void LegionMove();
        
       //bool CreateLegion(std::size_t specialization);
        ~MainManager();

        void run();
};

#endif