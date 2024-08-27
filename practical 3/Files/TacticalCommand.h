#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include <iostream>

#include "BattleStrategy.h"
#include "Ambush.h"
#include "Flanking.h"
#include "Fortification.h"

#include "TacticalPlanner.h"
#include "WarArchives.h"

#include "LegionFactory.h"
#include "Legion.h"

class TacticalCommand {
    private:
        BattleStrategy *strategy = new Fortification;
        TacticalPlanner *planner = new TacticalPlanner(new Fortification);
        WarArchives *archive = new WarArchives;

    public:
        void setStrategy(BattleStrategy *s);
        bool chooseBestStrategy(std::size_t specialization);
        void executeStrategy(LegionFactory* factory, Legion* legion);
        BattleStrategy* getStrategy();
        void setMemento(std::string label);
        void getMemento(std::string label);
        ~TacticalCommand();
        

};

#endif