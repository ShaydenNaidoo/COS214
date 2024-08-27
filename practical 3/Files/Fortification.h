#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"
#include "LegionFactory.h"
#include "Legion.h"
class Fortification : public BattleStrategy{
    public:
        void engage(LegionFactory* factory, Legion* legion); 
};

#endif