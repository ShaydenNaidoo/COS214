#include "TacticalCommand.h"

void TacticalCommand::setStrategy(BattleStrategy *s){
    delete this->strategy;
    this->strategy = s;
    this->planner->setStrategy(s);

}

<<<<<<< HEAD
void TacticalCommand::executeStrategy(){
    this->strategy = this->planner->getStrategy();
    this->strategy->engage();

}

bool TacticalCommand::chooseBestStrategy(std::size_t specialization){
    std::string x = this->archive->bestStrategy(specialization);
=======
void TacticalCommand::chooseBestStrategy(std::size_t specialization){
    switch(specialization){
        case 0:
            this->setStrategy(new Flanking);
            break;
        
        case 1:
            this->setStrategy(new Ambush);
            break;
>>>>>>> 9fd9439f8f097de2f12a0686354935c85d32c825

    if(x == "") return false;

    this->getMemento(x);

    return true;

}

BattleStrategy* TacticalCommand::getStrategy(){
    this->strategy = this->planner->getStrategy();
    return this->strategy;

}
<<<<<<< HEAD

void TacticalCommand::setMemento(std::string label){
    this->archive->addTacticalMemento(this->planner->createMemento(), label);

}

void TacticalCommand::getMemento(std::string label){
    this->planner->restoreMemento(this->archive->removeTacticalMemento(label));
    delete this->strategy;
    this->strategy = this->planner->getStrategy();

}

TacticalCommand::~TacticalCommand(){
    delete strategy;
    delete planner;

=======
void TacticalCommand::executeStrategy(LegionFactory* factory,Legion* legion ){
    if(this->strategy == nullptr) return;
    this->strategy->engage(factory,legion);
>>>>>>> 9fd9439f8f097de2f12a0686354935c85d32c825
}