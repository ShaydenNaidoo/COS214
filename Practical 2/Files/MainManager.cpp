//FACTORY_MANAGER
#include "MainManager.h"

MainManager::MainManager(int amountOfSoldiersPerUnit){
    factory.push_back(new InfantryFactory(amountOfSoldiersPerUnit));
    factory.push_back(new ShieldBearerFactory(amountOfSoldiersPerUnit));
    factory.push_back(new BoatmanFactory(amountOfSoldiersPerUnit));


}

bool MainManager::createUnit(std::size_t type, int health, int damage, int defence, std::string unitName){
    if(type >= 3 || type < 0) return false;

    Soldiers *product = factory[type]->createUnit(health,damage,defence,unitName);

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

std::size_t MainManager::getIndex(Soldiers *soldier){
    std::size_t i = 0;
    for(Soldiers* x : soldiers){
        if(soldier == x) return  i;
        i++;
        
    }


    return i;

}

std::size_t MainManager::numberOfUnits(){
    return soldiers.size();
}

void MainManager::printUnits(){
    std::cout << "\033[1;4;37mInfantry:\033[0m\n" ;
    for(Soldiers* x : soldiers){
        if(x->getType() == 'I'){
            std::cout << "\n\033[1;37m" << x->getUnitName() << ":\033[0m" << std::endl 
            << "\tTotal Health: \033[32m" << factory[0]->calculateTotalHealthPerUnit(x) << "\033[0m" <<  std::endl
            << "\tTotal Damage: \033[31m" << factory[0]->calculateTotalDamagePerUnit(x) << "\033[0m" << std::endl
            << "\tTotal Defence: \033[36m" << factory[0]->calculateTotalDefencePerUnit(x) << "\033[0m" << std::endl
            << "\tTotal Damage Taken: \033[33m" << x->getDamageTaken() << "\033[0m" << std::endl
            << "\tCurrent Number of Soldiers: \033[35m" << x->getCurrNumSoldiers() << "\033[0m" << std::endl << std::endl;        
        }
    }

    std::cout << "\n\033[1;4;37mShield Bearers:\033[0m\n" ;
    for(Soldiers* x : soldiers){
        if(x->getType() == 'S'){
            std::cout << "\n\033[1;37m" << x->getUnitName() << ":\033[0m" << std::endl 
            << "\tTotal Health: \033[32m" << factory[0]->calculateTotalHealthPerUnit(x) << "\033[0m" <<  std::endl
            << "\tTotal Damage: \033[31m" << factory[0]->calculateTotalDamagePerUnit(x) << "\033[0m" << std::endl
            << "\tTotal Defence: \033[36m" << factory[0]->calculateTotalDefencePerUnit(x) << "\033[0m" << std::endl
            << "\tTotal Damage Taken: \033[33m" << x->getDamageTaken() << "\033[0m" << std::endl
            << "\tCurrent Number of Soldiers: \033[35m" << x->getCurrNumSoldiers() << "\033[0m" << std::endl << std::endl;               
        
        }
    }

    std::cout << "\n\033[1;4;37mBoatman:\033[0m\n" ;
    for(Soldiers* x : soldiers){
        if(x->getType() == 'B'){
            std::cout << "\n\033[1;37m" << x->getUnitName() << ":\033[0m" << std::endl 
            << "\tTotal Health: \033[32m" << factory[0]->calculateTotalHealthPerUnit(x) << "\033[0m" <<  std::endl
            << "\tTotal Damage: \033[31m" << factory[0]->calculateTotalDamagePerUnit(x) << "\033[0m" << std::endl
            << "\tTotal Defence: \033[36m" << factory[0]->calculateTotalDefencePerUnit(x) << "\033[0m" << std::endl
            << "\tTotal Damage Taken: \033[33m" << x->getDamageTaken() << "\033[0m" << std::endl
            << "\tCurrent Number of Soldiers: \033[35m" << x->getCurrNumSoldiers() << "\033[0m" << std::endl << std::endl;        

        }
    }
}

void MainManager::printSummary(){
    int I = 0, S = 0, B = 0, T = 0;
    for(Soldiers *x : soldiers){
        if(x->getType() == 'I') I++;
        else if(x->getType() == 'S') S++;
        else if(x->getType() == 'B') B++;

        T += x->getCurrNumSoldiers();

    }

    std::cout << "\033[1;4;37mArmy Summary:\033[0m\n\tCurrent Number of Soldiers: \033[36m" << T << "\033[0m" << std::endl
    << "\tTotal Number of Infantry: \033[36m" << I << "\033[0m" << std::endl
    << "\tTotal Number of Shield Bearers: \033[36m" << S << "\033[0m" << std::endl
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

void MainManager::cloneSoldier(){
    for(std::size_t x = soldiers.size()-1; x > 0; x-- ) {
        cloneSoldier(x); 
    }

    cloneSoldier(0);

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
    std::size_t i = getIndex(soldier);
    Memento* state = soldier->militusMemento();

    for(Memento* x : mStack[i]){
        if(x == state) return false;
   
    }

    mStack[i].push_back(state);


    return true;

}

void MainManager::vivifaMemento(){

    for(Soldiers* x : soldiers){
        vivifaMemento(x);
    
    }

}

bool MainManager::vivifaMemento(Soldiers *soldier){
    std::size_t i = getIndex(soldier);

    if(mStack[i].empty() == true) return false;


    soldier->vivificaMemento(mStack[i].back());
    
    mStack[i].pop_back();
    

    return true;

}

void MainManager::printUnit(std::size_t x){
    if(x < 0 || x >= soldiers.size()) return;
    std::cout << "\n\033[1;37m" << soldiers[x]->getUnitName() << ":\033[0m" << std::endl 
    << "\tTotal Health: \033[32m" << factory[0]->calculateTotalHealthPerUnit(soldiers[x]) << "\033[0m" <<  std::endl
    << "\tTotal Damage: \033[31m" << factory[0]->calculateTotalDamagePerUnit(soldiers[x]) << "\033[0m" << std::endl
    << "\tTotal Defence: \033[36m" << factory[0]->calculateTotalDefencePerUnit(soldiers[x]) << "\033[0m" << std::endl
    << "\tCurrent Number of Soldiers: \033[35m" << soldiers[x]->getCurrNumSoldiers() << "\033[0m" << std::endl << std::endl;        
}