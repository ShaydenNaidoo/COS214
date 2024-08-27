//MAIN_MANAGER
#ifndef MAINMANAGER_H
#define MAINMANAGER_H

#include <iostream>
#include <vector>

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
#include "BattleStrategy.h"
#include "Ambush.h"
#include "Flanking.h"
#include "Fortification.h"


class MainManager {
    private:
        std::vector<LegionFactory*> factory;
        TacticalCommand *command;
        Legion* riverbankLegion; 
        Legion* woodlandLegion;
        Legion* openFieldLegion;
        std::size_t specialization;


    public:
        MainManager(std::size_t specialization);
        bool setSpecialization(std::size_t specialization);
        std::string getSpecialization();
        bool createInfantry(int health, int defence, int damage, std::string name);
        bool createCavalry(int health, int defence, int damage, std::string name, int speed);
        bool createArtillery(int health, int defence, int damage, std::string name, int range, int accuracy);
        void LegionInfo();
        void LegionAttack();
        void LegionMove();
        void LegionsAttack();
        void LegionsMove();
        void setStrategy(int num);
        void chooseBestStrategy();
        void executeStrategy();

        ~MainManager();

};

#endif