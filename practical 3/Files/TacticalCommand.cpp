#include "TacticalCommand.h"

void TacticalCommand::setStrategy(BattleStrategy *s){
    if(s == nullptr) return;

    this->strategy = s;

}

void TacticalCommand::executeStrategy(){
    if(this->strategy == nullptr) return;

    this->strategy->engage();

}