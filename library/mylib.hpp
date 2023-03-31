#ifndef MYLIB_HPP
#define MYLIB_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstring>
# include <ctime>

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
        
};

# endif