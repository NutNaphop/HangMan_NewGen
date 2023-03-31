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
        string word ; 
        string temp_word ; 
        static char guess[20] ;
        void randWord(string *arr); 
        void remaining(char* arr);
        void restart();
        int inGame();
        
};

int game::life = 7  ; 
int game::score = 0 ;
int game::count = 0 ;
char game::guess[] = {}; 


class animation{
    public : 
        void animate(int a);
        void eight();
        void seven();
        void six();
        void five();
        void four();
        void three();
        void two();
        void one();
};



class display {
    public : 
        display(int score , int life);
        display(int life);
        void HUD(int score , int life){
        cout << "Life : " << life << " Score : " << score << endl  ;
        }
};


# endif