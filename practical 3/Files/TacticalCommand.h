#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include <iostream>

#include "BattleStrategy.h"
#include "Ambush.h"
#include "Flanking.h"
#include "Fortification.h"
<<<<<<< HEAD

#include "TacticalPlanner.h"
#include "WarArchives.h"


=======
#include "LegionFactory.h"
#include "Legion.h"
>>>>>>> 9fd9439f8f097de2f12a0686354935c85d32c825
class TacticalCommand {
    private:
        BattleStrategy *strategy = new Fortification;
        TacticalPlanner *planner = new TacticalPlanner(new Fortification);
        WarArchives *archive = new WarArchives;

    public:
        void setStrategy(BattleStrategy *s);
<<<<<<< HEAD
        void executeStrategy();
        bool chooseBestStrategy(std::size_t specialization);
=======
        void executeStrategy(LegionFactory* factory, Legion* legion);
        void chooseBestStrategy(std::size_t specialization);
>>>>>>> 9fd9439f8f097de2f12a0686354935c85d32c825
        BattleStrategy* getStrategy();
        void setMemento(std::string label);
        void getMemento(std::string label);
        ~TacticalCommand();
        

};

#endif