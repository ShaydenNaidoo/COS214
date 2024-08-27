#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"
#include "LegionFactory.h"
#include "Legion.h"
class Flanking : public BattleStrategy{
    public:
<<<<<<< HEAD
        void engage();
        bool operator==(char x);

=======
        // void engage();
        void engage(LegionFactory* factory, Legion* legion);       
>>>>>>> 9fd9439f8f097de2f12a0686354935c85d32c825
};

#endif