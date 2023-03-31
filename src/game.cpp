#include "../library/mylib.hpp"
#ifndef MYGAME_HPP
#define MYGAME_HPP
int import::ImportFile(int choice){
    ifstream myfile ; 
        if (choice >= 1 && choice <= 3){
                switch (choice){
                    case 1 : 
                        filename = "../text/word.txt";
                        break;
                    case 2 : 
                        filename = "../text/animal.txt";
                        break;
                    case 3 : 
                        filename = "question/daily.txt";
                        break;
                }
                myfile.open(filename);
                if (!myfile){
                    cout << "Error" << endl ;
                    exit(0);
                }
                    while (!myfile.eof()){
                    getline(myfile,line);
                    words[index] = line ;
                    index ++ ;
            } 
            myfile.close() ;
            index = 0 ;  
            return 1 ; // if complete  it will return 1 
        };
};

void import::showFile(){
    for (int i = 0 ; i < 2 ; i++){
        cout << words[i] << endl ;
    }
}

void game::restart(){
    for (int i = 0 ; i < word.length() ; i++){
        guess[i] = '\0';
    }
    count = 0 ;
}

void game::randWord(string *arr){
    cout << word ;
    srand((unsigned) time(NULL)); 
    random = rand() % 5 ; 
    word = arr[random] ; 
    temp_word = word ;  
}

void game::remaining(char* arr){
     cout << "Now You Have => "; 
            // Remaining Word
            for (int i = 0 ; i  < word.length() ; i ++){                                
                if (arr[i] != '\0'){
                    cout << arr[i];
                                }
                else {
                    cout << "-";
                                }
                            }
                cout << endl ;
}

int game::inGame(){
    game::restart();
    game::randWord(words);
    game::remaining(guess);
    cout << word << endl;
    while (life != 0){ // I choose this cuz it non error
                if (count == word.length()){
                    break;
                }
                // Check Detect Error out of range lowercase alpha 

                    do {
                        cout << "Input : " ; cin >> alpha ;
                        if (!islower(alpha[0])){
                            cout << "Input Only lowercase" ;
                        }
                    }while (!islower(alpha[0]));

                    for (int j = 0 ; j < word.length() ; j++){
                        if (alpha[0] == word[j]){
                            guess[j] = word[j] ;
                            game::remaining(guess);
                            word[j] = '\0' ; 
                            count ++ ;
                            score += 10 ; 
                            display objD(10,life);
                            objD.HUD(score,life);
                            break;
                        }else if (alpha[0] != word[j]){
                            if (j == word.length()-1){
                                life --;
                                game::remaining(guess);
                                display objD(life);
                                objD.HUD(0,life);
                                break;
                            }
                        }
                    }
                }
            if (life == 0){
                cout << temp_word << endl ;
                system("pause") ; 
                return 0 ; 
            } 
            else {
                game::inGame();
            }
};
#endif