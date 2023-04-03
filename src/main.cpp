#include "game.cpp"
#include "../library/mylib.hpp"
#include <iostream>
#include <stdlib.h>

int main(){ 
    game obj1 ; 
    menugame objMenu , objMenu2;
    highscore objHS;
    int control;
    string name_user ;
   keybd_event(VK_F11, 0, 0, 0);
//   objMenu.intro();
    obj1.getName() ; 
    while (true){
            objHS.importScore();
            control = objMenu.showMenu();
            if (control == 1){
                obj1.selectCate();
                obj1.inGame();
            }
            else if (control == 2){
                objMenu.showHowto();
            }
            else if (control == 3){
                objHS.sortByScoreDescending();
                objHS.display();
            }
            else if (control == 4){
                objMenu.showVocab();
            }
            else if (control == 5){
                break;
            }
            else if (control == 404){
                continue;    
            }
            else if (control == 100){
                objHS.easterEgg();
            }
    }   
}
