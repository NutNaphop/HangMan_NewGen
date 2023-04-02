#include "game.cpp"
#include "../library/mylib.hpp"
#include <iostream>
#include <stdlib.h>
int main(){ 
    game obj1 ; 
    menugame objMenu , objMenu2;
    highscore objHS;
    int a , b;
    keybd_event(VK_F11, 0, 0, 0);
   objMenu.intro();
    obj1.getName();
    while (true){
    		objHS.importScore();
           a = objMenu.showMenu();
            if (a == 1){
                obj1.selectCate();
                obj1.inGame();
            }
            else if (a == 2){
                objMenu.showHowto();
            }
            else if (a == 3){
                objHS.sortByScoreDescending();
                objHS.display();
            }
            else if (a == 4){
                objMenu.showVocab();
            }
            else if (a == 5){
                break;
            }
            else if (a == 404){
                continue;    
            }
    }   
}
