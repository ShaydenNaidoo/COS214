#include "TacticalCommand.h"

void TacticalCommand::setStrategy(BattleStrategy *s){
    delete this->strategy;
    this->strategy = s;

}

void TacticalCommand::chooseBestStrategy(std::size_t specialization){
    switch(specialization){
        case 0:
            this->setStrategy(new Flanking);
            break;
        
        case 1:
            this->setStrategy(new Ambush);
            break;

        case 2:
            this->setStrategy(new Fortification);

    }

}

BattleStrategy* TacticalCommand::getStrategy(){
    return this->strategy;

}
void TacticalCommand::executeStrategy(LegionFactory* factory,Legion* legion ){
    if(this->strategy == nullptr) return;
    this->strategy->engage(factory,legion);
}