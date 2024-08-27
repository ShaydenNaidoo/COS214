#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"
#include "LegionFactory.h"
#include "Legion.h"
class Ambush: public BattleStrategy {
    public:
    void engage(LegionFactory* factory, Legion* legion);
    bool operator==(char x);

};


#endif