//BATTLE_MANAGER
#ifndef BATTLEMANAGER_H
#define BATTLEMANAGER_H

#include <iostream>
#include <vector>
#include "MainManager.h"

class BattleManager{
    private:
        MainManager *enemy, *army;
        std::vector<std::size_t> engagedArmy;
        bool k = false;

    public:
        BattleManager();
        BattleManager(MainManager *army, MainManager *enemy);
        void kill(){k = true;};
        void Battle();


};

#endif