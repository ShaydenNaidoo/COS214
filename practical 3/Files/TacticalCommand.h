#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include <iostream>

#include "BattleStrategy.h"
#include "Ambush.h"
#include "Flanking.h"
#include "Fortification.h"


class TacticalCommand {
    private:
        BattleStrategy *strategy = new Fortification;

    public:
        void setStrategy(BattleStrategy *s);
        void executeStrategy();
        void chooseBestStrategy(std::size_t specialization);
        BattleStrategy* getStrategy();
        

};

#endif