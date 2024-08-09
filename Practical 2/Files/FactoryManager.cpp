//FACTORY_MANAGER
#include "FactoryManager.h"

FactoryManager::FactoryManager(int amountOfSoldiersPerUnit){
    factory.push_back(new InfantryFactory(amountOfSoldiersPerUnit));
    factory.push_back(new ShieldBearerFactory(amountOfSoldiersPerUnit));
    factory.push_back(new BoatmanFactory(amountOfSoldiersPerUnit));


}

bool FactoryManager::createUnit(std::size_t type, int health, int damage, int defence, std::string unitName){
    if(type >= 3 || type < 0) return false;
    
    Soldiers *product = factory[type]->createUnit(health,damage,defence,unitName);

    if(product == nullptr) return false;
    else soldiers.push_back(product);

    return true;

}

int FactoryManager::getAmountOfSoldiersPerUnit(){
    return factory[0]->getAmountOfSoldiersPerUnit();

}

void FactoryManager::printUnits(){
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

void FactoryManager::printSummary(){
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
