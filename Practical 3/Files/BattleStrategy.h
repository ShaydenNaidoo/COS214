#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include <iostream>
#include "LegionFactory.h"
#include "Legion.h"
class BattleStrategy {
    public:
        //virtual void engage() = 0;
        virtual void engage(LegionFactory* factory,Legion* legion) = 0;
        virtual bool operator==(char x) = 0;
};

#endif