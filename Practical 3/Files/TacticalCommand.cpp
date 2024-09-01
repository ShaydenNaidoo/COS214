#include "TacticalCommand.h"

void TacticalCommand::setStrategy(BattleStrategy *s){
    delete this->strategy;
    this->strategy = s;
    this->planner->setStrategy(s);

}


bool TacticalCommand::chooseBestStrategy(std::size_t specialization){
    std::string x = this->archive->bestStrategy(specialization);

    if(x == "") return false;

    this->getMemento(x);

    return true;

}

BattleStrategy* TacticalCommand::getStrategy(){
    this->strategy = this->planner->getStrategy();
    return this->strategy;

}

void TacticalCommand::setMemento(std::string label){
    this->archive->addTacticalMemento(this->planner->createMemento(), label);

}

void TacticalCommand::getMemento(std::string label){
    this->planner->restoreMemento(this->archive->removeTacticalMemento(label));
    this->setStrategy(this->planner->getStrategy());

}

void TacticalCommand::executeStrategy(LegionFactory* factory,Legion* legion ){
    if(this->strategy == nullptr) return;
    this->strategy->engage(factory,legion);
}

TacticalCommand::~TacticalCommand(){
    delete strategy;
    delete planner;
    delete archive;

}

