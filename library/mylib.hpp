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
#include <unistd.h> //
#include <Windows.h> // FullScreen
#include <iomanip> // setDisplay

using namespace std ;
//Menu 
class menugame{
    public :
     string choice;
     int showMenu(); 
     void showHighScore() ;
     void showVocab() ;
     void showHowto();
     void startProgram();
     void intro();
};

class highscore : public menugame{
    public : 
        string line ;
        string name , mode ;
        int score ;
        int choose ;
        void importScore();
        void sortByScoreDescending();
        void display();
        void writeHis(string name , string mode , int score);
        int getChoose(int mode);
        int easterEgg();
    private:
        vector<tuple<string, string, int>> scores_;
};

class import {
    public : 
        string filename;
        string line ;
        string category ; 
        string choose ; 
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
            cout << "\t\t\t\t\t\t\t\t" ;
             cout << "+------------------------------------------------------------------+" << endl;
             cout << "\t\t\t\t\t\t\t\t" ;
             cout << "  Score: " << setw(7) << setfill('0') << score;
             cout << "         Name: " << game::name;
             cout << "         Lives: ";
             for (int i = life ; i > 0 ; i--){
                cout << "*" ;
             }
            cout << "       " << endl;
        cout << "\t\t\t\t\t\t\t\t" ;
        cout << "+------------------------------------------------------------------+" << endl;
        }
        static void clearScreen(){
            sleep(0.75);
            system("cls");
        }
};


# endif