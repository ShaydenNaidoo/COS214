#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"
#include "LegionFactory.h"
#include "Legion.h"
class Flanking : public BattleStrategy{
    public:
        // void engage();
        void engage(LegionFactory* factory, Legion* legion);       
};

#endif