#include "TacticalMemento.h"

void TacticalMemento::storeStrategy(BattleStrategy *strategy){
    this->strategy = strategy;

}

BattleStrategy* TacticalMemento::getStrategy(){
    return this->strategy;

}