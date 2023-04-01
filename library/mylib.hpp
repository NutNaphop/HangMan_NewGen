#ifndef MYLIB_HPP
#define MYLIB_HPP

# include <iostream> // base c++
# include <fstream> // file 
# include <string> // string method
# include <cstring> // string method 
# include <ctime> // random 
# include <string.h> // String method  
# include <stdio.h> // Why ?
# include <sstream> // sort score function
# include <vector> // sort score function
# include <algorithm> // sort score function
# include <tuple> // sort score function

using namespace std ;
//Menu 
class menugame{
    public :
     string choice;
     int showMenu(); 
     void showHighScore() ;
     void showVocab() ;
     void showHowto();
};

class highscore : public menugame{
    public : 
        string line ;
        string name , mode ;
        int score ;
        void importScore();
        void sortByScoreDescending();
        void display();
        void writeHis(string name , string mode , int score);
    private:
        vector<tuple<string, string, int>> scores_;
};

class import {
    public : 
        string filename;
        string line ;
        string category ; 
        int choose ; 
        string words[100]; 
        static int index ;
        int ImportFile(int choice);
        void showFile();
        void selectCate();
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
        static string name ; 
        static char guess[20] ;
        void randWord(string *arr); 
        void remaining(char* arr);
        void restart();
        int inGame();
        string getName();
        
};

int game::life = 7  ; 
int game::score = 0 ;
int game::count = 0 ;
char game::guess[] = {}; 
string game::name = "player1" ;

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
        static void HUD(int score , int life){
        cout << "Name : " << game::name << " Life : " << life << " Score : " << score << endl  ;
        }
};


# endif