//BATTLE_MANAGER
#ifndef BATTLEMANAGER_H
#define BATTLEMANAGER_H

#include <iostream>
#include "MainManager.h"

class BattleManager{
    private:
        MainManager *enemy, *army;

    public:
        BattleManager();
        BattleManager(MainManager* enemy, MainManager* army);
        void Start();

};

#endif