//FACTORY_MANAGER
#include "MainManager.h"

MainManager::MainManager(int amountOfSoldiersPerUnit){
    factory.push_back(new InfantryFactory(amountOfSoldiersPerUnit));
    factory.push_back(new ShieldBearerFactory(amountOfSoldiersPerUnit));
    factory.push_back(new BoatmanFactory(amountOfSoldiersPerUnit));


}

bool MainManager::createUnit(std::size_t type, int health, int damage, int defence, std::string unitName){
    if(type >= 3 || type < 0) return false;

    std::map<std::string,std::vector<Memento*>>::iterator x;
    for(x = mStack.begin(); x != mStack.end(); x++){
        if(x->first == unitName) return false;

    }

    Soldiers *product = factory[type]->createUnit(health,damage,defence,unitName);
    mStack[unitName];

    if(product == nullptr) return false;
    else soldiers.push_back(product);

    return true;

}

int MainManager::getAmountOfSoldiersPerUnit(){
    return factory[0]->getAmountOfSoldiersPerUnit();

}

void MainManager::appendSoldier(Soldiers *soldier){
    soldiers.push_back(soldier);

}

Soldiers *MainManager::operator[](std::size_t x){
    if(x < 0 || x >= soldiers.size()) return nullptr;
    return soldiers[x];
}

void MainManager::printUnits(){
    std::cout << "\033[1;4;37mInfantry:\033[0m\n" ;
    for(Soldiers* x : soldiers){
        if(x->getType() == 'I'){
            std::cout << "\n\033[1;37m" << x->getUnitName() << ":\033[0m" << std::endl 
            << "\tTotal Health: \033[32m" << factory[0]->calculateTotalHealthPerUnit(x) << "\033[0m" <<  std::endl
            << "\tTotal Damage: \033[31m" << factory[0]->calculateTotalDamagePerUnit(x) << "\033[0m" << std::endl
            << "\tTotal Defence: \033[36m" << factory[0]->calculateTotalDefencePerUnit(x) << "\033[0m" << std::endl << std::endl;        
        }
    }

    std::cout << "\n\033[1;4;37mShield Bearers:\033[0m\n" ;
    for(Soldiers* x : soldiers){
        if(x->getType() == 'S'){
            std::cout << "\n\033[1;37m" << x->getUnitName() << ":\033[0m" << std::endl 
            << "\tTotal Health: \033[32m" << factory[0]->calculateTotalHealthPerUnit(x) << "\033[0m" <<  std::endl
            << "\tTotal Damage: \033[31m" << factory[0]->calculateTotalDamagePerUnit(x) << "\033[0m" << std::endl
            << "\tTotal Defence: \033[36m" << factory[0]->calculateTotalDefencePerUnit(x) << "\033[0m" << std::endl << std::endl;        
        }
    }

    std::cout << "\n\033[1;4;37mBoatman:\033[0m\n" ;
    for(Soldiers* x : soldiers){
        if(x->getType() == 'B'){
            std::cout << "\n\033[1;37m" << x->getUnitName() << ":\033[0m" << std::endl 
            << "\tTotal Health: \033[32m" << factory[0]->calculateTotalHealthPerUnit(x) << "\033[0m" <<  std::endl
            << "\tTotal Damage: \033[31m" << factory[0]->calculateTotalDamagePerUnit(x) << "\033[0m" << std::endl
            << "\tTotal Defence: \033[36m" << factory[0]->calculateTotalDefencePerUnit(x) << "\033[0m" << std::endl << std::endl;        
        }
    }
}

void MainManager::printSummary(){
    int I = 0, S = 0, B = 0;
    for(Soldiers *x : soldiers){
        if(x->getType() == 'I') I++;
        else if(x->getType() == 'S') S++;
        else if(x->getType() == 'B') B++;
    }

    std::cout << "\033[1;4;37mArmy Summary:\033[0m\n\tNumber of Soldiers per Unit: \033[36m" << this->getAmountOfSoldiersPerUnit() << "\033[0m" << std::endl
    << "\tTotal Number of Infantry: \033[36m" << I << "\033[0m" << std::endl
    << "\tTotal NUmber of Shield Bearers: \033[36m" << S << "\033[0m" << std::endl
    << "\tTotal Number of Boatman: \033[36m" << B << "\033[0m" << std::endl
    << "\t\033[1;37mTotal Number of Units:\033[0m\033[1;36m " << I + S + B << "\033[0m" << std::endl << std::endl;
}

MainManager::~MainManager()
{
}

void MainManager::cloneSoldier(std::size_t x){
    if(x < 0 || x >= soldiers.size()) return;
    Soldiers *clone = soldiers[x]->clonis();
    soldiers.push_back(clone);
    
}
void MainManager::titusComands(){
 std::cout << "\n\033[1;33m+------------------------------------------------------------------------------+\033[0m" << std::endl;
 
    std::cout <<   "\033[1;33m|                              \033[1;4;35mTITUS COMMANDS\033[0m\033[1;33m                                  |\033[0m" << std::endl;
    std::cout <<   "\033[1;33m+------------------------------------------------------------------------------+\033[0m" << std::endl;
    for(Soldiers *x : soldiers) {
         std::cout <<   "\033[1;33m|------------------------------------------------------------------------------|\033[0m" << std::endl;
        std::cout << "\033[1;31m| \033[1;34mTitus: \033[1;36m" << x->getUnitName() << " engage with the enemy now!                               \033[1;31m|\033[0m" << std::endl;
        x->engage();
         std::cout <<   "\033[1;33m|------------------------------------------------------------------------------|\033[0m" << std::endl;
        std::cout << "\033[1;31m| \033[1;34mTitus: \033[1;36m" << x->getUnitName() << " disengage and fall back to base!                         \033[1;31m|\033[0m" << std::endl;
        x->disengage();
        std::cout << "\033[1;31m+------------------------------------------------------------------------------+\033[0m" << std::endl;
    }
}

void MainManager::militusMemento(){
    for(Soldiers* x : soldiers){
        militusMemento(x);
    
    }

}

bool MainManager::militusMemento(Soldiers *soldier){
    for(Memento* x : mStack[soldier->getUnitName()]){
        if(x == soldier->militusMemento()) return false;
   
    }

    mStack[soldier->getUnitName()].push_back(soldier->militusMemento());

    return true;

}

void MainManager::vivifaMemento(){
    for(Soldiers* x : soldiers){
        vivifaMemento(x);
    
    }

}

bool MainManager::vivifaMemento(Soldiers *soldier){
    if(mStack[soldier->getUnitName()].empty() == true) return false;

    soldier->vivificaMemento(mStack[soldier->getUnitName()].back());
    mStack[soldier->getUnitName()].pop_back();

    return true;

}

