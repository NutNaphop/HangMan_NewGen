#ifndef MYLIB_HPP
#define MYLIB_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstring>
# include <ctime>
# include <string.h>

using namespace std ;
class import {
    public : 
        string filename;
        string line ;
        string words[100]; 
        static int index ; 
        int ImportFile(int choice);
        void showFile();
};
int import::index = 0 ;

class game : public import{
    public : 
        static int life ;
        static int score ; 
        static int count ;
        int random ;  
        int length ; 
        string alpha ;
        static char guess[20] ;
        string word ; 
        string temp_word ; 
        void randWord(string *arr); 
        void remaining(char* arr);
        void restart();
        int inGame();
        
};

int game::life = 8  ; 
int game::score = 0 ;
int game::count = 0 ;
char game::guess[] = {}; 

class display {
    public : 
        display(int score , int life){
        cout << "---True!---" << endl << endl ;
        cout << "Now you got 10 Point" << endl ; 
        }
        display(int life){
        cout << "---False---" << endl << endl ;
        cout << "Unfortunately Wrong" << endl ; 
        cout << "Remaining changes " << life << " left" << endl ;
        }
        void HUD(int score , int life){
        cout << "Life : " << life << " Score : " << score << endl  ;
        }
};

class animation : public display{
    public : 
        void eight();
        void seven();
        void six();
        void five();
        void four();
        void three();
        void two();
        void one();
};

# endif