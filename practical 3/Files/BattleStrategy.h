#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include <iostream>
#include "LegionFactory.h"
#include "Legion.h"
class BattleStrategy {
    public:
<<<<<<< HEAD
        virtual void engage() = 0;
        virtual bool operator==(char x) = 0;

=======
        //virtual void engage() = 0;
        virtual void engage(LegionFactory* factory,Legion* legion) = 0;;
>>>>>>> 9fd9439f8f097de2f12a0686354935c85d32c825
};

#endif