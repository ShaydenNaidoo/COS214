#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h"

class TacticalMemento {
    private:
        BattleStrategy *strategy;

    public:
        void storeStrategy(BattleStrategy *strategy);
        BattleStrategy* getStrategy();
   
};

#endif