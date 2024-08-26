#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include <iostream>

#include "BattleStrategy.h"


class TacticalCommand {
    private:
        BattleStrategy *strategy;

    public:
        void setStrategy(BattleStrategy *s);
        void executeStrategy();
        void chooseBestStrategy();
        

};

#endif