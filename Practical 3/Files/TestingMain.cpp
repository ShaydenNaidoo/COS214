#include <iostream>

#include "RiverbankFactory.h"
#include "WoodlandFactory.h"
#include "OpenFieldFactory.h"
#include "LegionUnit.h"
#include "MainManager.h"
#include "TacticalCommand.h"
#include "Ambush.h"
#include "Flanking.h"
#include "Fortification.h"

using namespace std;

int main(){
/*                                    Concrete Factory & Product Testing                                                                   */    
//     LegionUnit **units = new LegionUnit* [9];
//     RiverbankFactory riverbankFactory;
//     WoodlandFactory woodlandFactory;
//     OpenFieldFactory openFieldFactory;

//     units[0] = riverbankFactory.createInfantry(100,50,25,"[R][I]");
//     units[1] = riverbankFactory.createCavalry(100, 50, 25, "[R][C]" , 69);
//     units[2] = riverbankFactory.createArtillery(100,50,25,"[R][A]", 50, 100);

//     units[3] = woodlandFactory.createInfantry(100,50,25,"[W][I]");
//     units[4] = woodlandFactory.createCavalry(100, 50, 25, "[W][C]" , 69);
//     units[5] = woodlandFactory.createArtillery(100,50,25,"[W][A]", 50, 100);

//     units[6] = openFieldFactory.createInfantry(100,50,25,"[O][I]");
//     units[7] = openFieldFactory.createCavalry(100, 50, 25, "[O][C]" , 69);
//     units[8] = openFieldFactory.createArtillery(100,50,25,"[O][A]", 50, 100);

//     cout << "\n\033[7;37mConcrete Factory and Product Testing\033[0m\n\n";

//     for(int x = 0; x < 9; x++){
//         units[x]->printUnitDetails();
//         cout << endl;

//     }   

/*                                    Main Manager Testing                                                                   */      
    MainManager manager(0);

    manager.createInfantry(100,50,25,"[R][I]");
    manager.createInfantry(100,50,25,"[R][I]");
    manager.createInfantry(100,50,25,"[R][I]");
    manager.createInfantry(100,50,25,"[R][I]");
    manager.createCavalry(100,50,25,"[R][C]", 1);
    manager.createCavalry(100,50,25,"[R][C]", 1);
    manager.createCavalry(100,50,25,"[R][C]", 1);
    manager.createCavalry(100,50,25,"[R][C]", 1);
    manager.createArtillery(100,50,25,"[R][C]", 25, 1);
    manager.createArtillery(100,50,25,"[R][C]", 25, 1);
    manager.createArtillery(100,50,25,"[R][C]", 25, 1);
    manager.createArtillery(100,50,25,"[R][C]", 25, 1);

    manager.setSpecialization(1);

    manager.createInfantry(100,50,25,"[W][I]");
    manager.createInfantry(100,50,25,"[W][I]");
    manager.createInfantry(100,50,25,"[W][I]");
    manager.createInfantry(100,50,25,"[W][I]");
    manager.createCavalry(100,50,25,"[W][C]", 1);
    manager.createCavalry(100,50,25,"[W][C]", 1);
    manager.createCavalry(100,50,25,"[W][C]", 1);
    manager.createCavalry(100,50,25,"[W][C]", 1);
    manager.createArtillery(100,50,25,"[W][C]", 25, 1);
    manager.createArtillery(100,50,25,"[W][C]", 25, 1);
    manager.createArtillery(100,50,25,"[W][C]", 25, 1);
    manager.createArtillery(100,50,25,"[W][C]", 25, 1);

    manager.setSpecialization(2);

    manager.createInfantry(100,50,25,"[O][I]");
    manager.createInfantry(100,50,25,"[O][I]");
    manager.createInfantry(100,50,25,"[O][I]");
    manager.createInfantry(100,50,25,"[O][I]");
    manager.createCavalry(100,50,25,"[O][C]", 1);
    manager.createCavalry(100,50,25,"[O][C]", 1);
    manager.createCavalry(100,50,25,"[O][C]", 1);
    manager.createCavalry(100,50,25,"[O][C]", 1);
    manager.createArtillery(100,50,25,"[O][C]", 25, 1);
    manager.createArtillery(100,50,25,"[O][C]", 25, 1);
    manager.createArtillery(100,50,25,"[O][C]", 25, 1);
    manager.createArtillery(100,50,25,"[O][C]", 25, 1);
       
    cout << "\n\033[7;37mMain Manager Testing\033[0m\n\n";
    manager.LegionInfo();

    manager.LegionsMove();
    manager.LegionsAttack();
    manager.LegionMove();
    manager.LegionAttack();
    
    manager.executeStrategy();
    // std::cout << "\t |END|\n\n";

    manager.setStrategy(0);
    manager.executeStrategy();
    std::cout << "\t |END|\n\n";

    manager.setStrategy(1);
    manager.executeStrategy();
    std::cout << "\t |END|\n\n";

    manager.setStrategy(2);
    manager.executeStrategy();
    std::cout << "\t |END|\n\n";

    // manager.setMemento("MemTest");
    // manager.getMemento("MemTest");
    // manager.chooseBestStrategy();
    // manager.executeStrategy();
    




/*                                    Memory Management                                                                   */   
    // for(int x = 0; x < 9; x++) delete units[x];
    // delete [] units;

    return 0;
}