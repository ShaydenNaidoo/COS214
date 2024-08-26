#include <iostream>

#include "RiverbankFactory.h"
#include "WoodlandFactory.h"
#include "OpenFieldFactory.h"
#include "LegionUnit.h"
#include "MainManager.h"

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
    cout << "\n\033[7;37mMain Manager Testing\033[0m\n\n";
    MainManager manager(0);

    

    


// /*                                    Memory Management                                                                   */   
//     for(int x = 0; x < 9; x++) delete units[x];
//     delete [] units;

  MainManager manager;

    // Create Units
    manager.createInfantry(100,50,25,"[R][I]",0);
    manager.createCavalry(120, 60, 40, "[W][C]", 10,1);
    manager.createArtillery(150, 70, 50, "[OF][A]", 2,10,2);

    // Display Legion Info
    manager.LegionInfo();

    // Simulate Attacks
    manager.LegionAttack();

    // Simulate Movements
    manager.LegionMove();
    return 0;
}