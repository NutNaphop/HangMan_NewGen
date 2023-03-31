#include "../library/mylib.hpp"

void animation::eight(){
    cout << R"(
____
|/   |
|   
|    
|    
|    
|
|_____)"<< '\n' ;
}
void animation::seven(){
    cout << R"(
 ____
|/   |
|   (_)
|    
|    
|    
|
|_____)"<< '\n' ;
}
void animation::six(){
    cout << R"(
 ____
|/   |
|   (_)
|    |
|    |    
|    
|
|_____)"<< '\n' ;
}
void animation::five(){
    cout << R"(
 ____
|/   |
|   (_)
|   \|
|    |
|    
|
|_____)"<< '\n' ;
}
void animation::four(){
    cout << R"(
 ____
|/   |
|   (_)
|   \|/
|    |
|    
|
|_____)"<< '\n' ;
}
void animation::three(){
    cout << R"(
 ____
|/   |
|   (_)
|   \|/
|    |
|   / 
|
|_____)"<< '\n' ;
}
void animation::two(){
    cout << R"(
 ____
|/   |
|   (_)
|   \|/
|    |
|   / \
|
|_____)"<< '\n' ;
}
void animation::one(){
    cout << R"(
 ____
|/   |
|   (_)
|   /|\
|    |
|   | |
|
|_____)"<< '\n' ;
}

void animation::animate(int life){
    switch (life) {
        case 7 :
            eight();
            break;
        case 6: 
            seven();
            break;
        case 5: 
            six();
            break;
        case 4:
            five();
            break;
        case 3:
            four();
            break;
        case 2:
            three();
            break;
        case 1:
            two();
            break;
        case 0:
            one();
            break;
    }
}

display::display(int score , int life){
    cout << "---True!---" << endl << endl ;
    cout << "Now you got 10 Point" << endl << endl ; 
    }
display::display(int life){
    cout << "---False---" << endl << endl ;
    cout << "Unfortunately Wrong" << endl ; 
    cout << "Remaining changes " << life << " left" << endl << endl ;
    
    }