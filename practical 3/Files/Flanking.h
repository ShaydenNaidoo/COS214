#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"
#include "LegionFactory.h"
#include "Legion.h"
class Flanking : public BattleStrategy{
    public:
        void engage(LegionFactory* factory, Legion* legion);       
        bool operator==(char x);
};

#endif