#include "game.cpp"
#include <iostream>
#include <stdlib.h>

int main(){ 
    game obj1 ; 
    menugame objMenu , objMenu2;
    highscore objHS;
    int a , b;
    obj1.getName();
    while (true){
           a = objMenu.showMenu();
            if (a == 1){
                obj1.selectCate();
                obj1.inGame();
            }
            else if (a == 2){
                objMenu.showHowto();
            }
            else if (a == 3){
                objHS.importScore();
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