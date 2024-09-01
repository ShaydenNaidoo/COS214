#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "BattleStrategy.h"
#include "TacticalMemento.h"

class TacticalPlanner {
    private:
        BattleStrategy *currentStrategy;
    
    public:
        TacticalPlanner(BattleStrategy *strategy);
        TacticalMemento* createMemento();
        void restoreMemento(TacticalMemento* Memento);
        void setStrategy(BattleStrategy *strategy);
        BattleStrategy* getStrategy();


};

#endif