#include <iostream>
using namespace std ;
int main(){
    int chooose ; 
    cout << "Now wake up in mysterious pyramid you see the way " << endl ;
    cout << "stay or go away \n [1]stay [2]go away : " << endl ; 
    cin >> chooose ;
    if (chooose == 1){ // 1
        cout << "Come on We can not stay here for too long ! ! !" ;
    }
    else if (chooose == 2){
        cout << "pass" ;
        cout << "You walk through the door and you see 2 doors" << endl ; //2
        cout << "Which door will you go [1] or [2] : " ; cin >> chooose ; 
        if (chooose == 1){
            cout << "You walk through the door and you see 3 doors" << endl ; // 3
            cout << "Which door will you go [1] or [2] or [3] : " ; cin >> chooose ; 
            if (chooose == 1){
                cout << "You fall in the trap , You Die ! ! ! " << endl ; 
            }
            else if (chooose == 2){
                cout << "You see the mummy and they kill you" << endl ; 
            }
            else if (chooose == 3){
                cout << "You walk through the door and you see 3 doors" << endl ; // 4
                cout << "Which door will you go [1] or [2] or [3] : " ; cin >> chooose ; 
                if (chooose == 1){
                }
                else if (chooose == 2){
                        cout << "You walk through the door and you see long way sprint or walk" << endl ; // 5
                        cout << "walk or sprint \n [1] walk [2] sprint : " ; cin >> chooose ; 
                    if (chooose == 1){
                        cout << "Now you see 2 treasure Which one you will pick : " << endl ; //6
                        cout << "Left or Right\n [1] Left [2] Right : " ; cin >> chooose ;  
                        if (chooose == 1){
                            cout << "OOPs ! It Fake And you die from stone trap , YOU DIE ! ! ! !" << endl;
                        }
                        else if (chooose == 2){
                            cout << "WELL WELL, You got the valuable tressure you got 10000 point Congratulation you have found the secret ! ! ! !" << endl ;
                        }
                    }
                    else if (chooose ==2){
                        cout << "Unfortunately you have shot by Arrow trap , You take the shot in your head , YOU DIE ! ! !" << endl ;
                    }
                }
                else if (chooose == 3){
                    cout << "You have Escape the pyramid and no way to enter again , SADLY but Good Ending ! ! !" << endl ;
                }
            }
        }
        else if (chooose == 2){
            cout << "This room is too darken You cannot see anything and you have fallen in the deep hole, YOU DIE ! ! !" << endl ;
        }
    }
}