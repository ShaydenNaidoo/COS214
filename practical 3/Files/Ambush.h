#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"
#include "LegionFactory.h"
#include "Legion.h"
class Ambush: public BattleStrategy {
    public:
    //void engage();
    void engage(LegionFactory* factory, Legion* legion);

};


#endif