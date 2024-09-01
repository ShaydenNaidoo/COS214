#include "TacticalPlanner.h"

TacticalPlanner::TacticalPlanner(BattleStrategy* strategy){
    this->currentStrategy = strategy;

}

TacticalMemento* TacticalPlanner::createMemento(){
    TacticalMemento *memento = new TacticalMemento;

    memento->storeStrategy(this->currentStrategy);

    return memento;
    

}

void TacticalPlanner::restoreMemento(TacticalMemento* memento){
    delete this->currentStrategy;
    this->currentStrategy = memento->getStrategy();

}

void TacticalPlanner::setStrategy(BattleStrategy *strategy){
    this->currentStrategy = strategy;

}

BattleStrategy* TacticalPlanner::getStrategy(){
    return this->currentStrategy;

}

