#include "../library/mylib.hpp"
#include "display.cpp"
#ifndef MYGAME_HPP
#define MYGAME_HPP
int import::ImportFile(int choice){
    ifstream myfile ; 
        if (choice >= 1 && choice <= 3){
                switch (choice){
                    case 1 : 
                        filename = "../text/animal.txt";
                        category = "Animal" ;
                        break;
                    case 2 : 
                        filename = "../text/country.txt";
                        category = "Country" ;
                        break;
                    case 3 : 
                        filename = "../text/all.txt";
                        category = "NigthM" ;
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
            return 1 ; // if complete  it will return 1 
        };
};

void import::showFile(){
    for (int i = 0 ; i < 2 ; i++){
        cout << words[i] << endl ;
    }
}
void import::selectCate() { // Need to fix bug
    cout << "\n"; // add blank lines to center text vertically
    cout << "\t\t\t\t\t\t\t\t\t--------------------------------------\n";
    cout << "\t\t\t\t\t\t\t\t\t|          Choose category            |\n";
    cout << "\t\t\t\t\t\t\t\t\t--------------------------------------\n";
    cout << "\t\t\t\t\t\t\t\t\t|  [1] Animal                         |\n";
    cout << "\t\t\t\t\t\t\t\t\t|  [2] Country                        |\n";
    cout << "\t\t\t\t\t\t\t\t\t|  [3] Nightmare (All)                |\n";
    cout << "\t\t\t\t\t\t\t\t\t--------------------------------------\n";
    cout << "\t\t\t\t\t\t\t\t\t  What do you want? : ";
    cin >> choose;
        switch (choose[0]) {
            case '1':
                display::clearScreen();
                import::ImportFile(1);
                break;
            case '2':
                display::clearScreen();
                import::ImportFile(2);
                break;
            case '3':
                display::clearScreen();
                import::ImportFile(3);
                break;
            default:
                display::clearScreen();
                import::selectCate();
            };
};

void game::restart(){
    for (int i = 0 ; i < word.length() ; i++){
        guess[i] = '\0';
    }
    count = 0 ;
}

void game::randWord(string *arr){
    cout << word ;
    srand((unsigned) time(NULL)); 
    random = rand() % index ; 
    word = arr[random] ; 
    temp_word = word ;  
}

void game::remaining(char* arr){
     cout << "\n" ; 
     cout << "\n" ; 
     cout << "\t\t\t\t\t\t\t\t\t\t     Now You Have => ";
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
    cout << "\n" ; 
}
string game::getName(){
        cout << "\n" ;
    cout << "\t\t\t\t\t\t\t\t------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t|                                                     |" << endl;
    cout << "\t\t\t\t\t\t\t\t|              BEFORE WE START, YOUR NAME?            |" << endl;
    cout << "\t\t\t\t\t\t\t\t|                                                     |" << endl;
    cout << "\t\t\t\t\t\t\t\t------------------------------------------------------" << endl;
   
        while (true){
            cout << "\t\t\t\t\t\t\t\tYour Name : " ; 
            getline(cin,name);  
            for (int i = 0 ; i < name.length() ; i ++ ){
                if (isspace(name[i]) || name.length() > 7 || name.length()<0){
                    cout << "\t\t\t\t\t\t\t\t--------------------------------------------------" << endl;
                    cout << "\t\t\t\t\t\t\t\t|  Your name should be between 1 and 6 characters  |" << endl;
                    cout << "\t\t\t\t\t\t\t\t|     No whitespaces allowed, please try again     |" << endl;
                    cout << "\t\t\t\t\t\t\t\t--------------------------------------------------" << endl;
                    cout << "\t\t\t\t\t\t\t\t" << system("pause");
                    display::clearScreen(); 
                    game::getName();
                }
            }
        display::clearScreen(); 
        return name ;
        }
};
int game::inGame(){
    animation objA ; 
    highscore objHighscore ; 
     // We need to move this but not now
    game::restart();
    game::randWord(words);
    display::HUD(score,life);
    objA.animate(life);
    game::remaining(guess);
    cout << word << endl;
    while (life != 0){ // I choose this cuz it non error
                if (count == word.length()){
                    break;
                }
                // Check Detect Error out of range lowercase alpha 
                    do {
                        cout << "\t\t\t\t\t\t\t\t\t\t+------------------------------------+" << endl;
                        cout << "\t\t\t\t\t\t\t\t\t\t| Enter a lowercase letter:          |" << endl;
                        cout << "\t\t\t\t\t\t\t\t\t\t+------------------------------------+" << endl;
                        cout << "\t\t\t\t\t\t\t\t\t\t> ";
                        cin >> alpha ;
                        
                        if (!islower(alpha[0])){
                            cout << "\t\t\t\t\t\t\t\t\t\t+------------------------------------+" << endl;
                            cout << "\t\t\t\t\t\t\t\t\t\t| Invalid input! Please try again.   |" << endl;
                            cout << "\t\t\t\t\t\t\t\t\t\t+------------------------------------+" << endl;
                            display::clearScreen();
                            display::HUD(score,life);
                            objA.animate(life);
                            game::remaining(guess);
                        }
                        else if (alpha.length() > 1) { 
                            display::clearScreen();
                            display::HUD(score,life);
                            objA.animate(life);
                            game::remaining(guess);
                        }
                    }while (!islower(alpha[0]) || alpha.length() > 1 );
                    for (int j = 0 ; j < word.length() ; j++){
                        if (alpha[0] == word[j]){
                            guess[j] = word[j] ;
                            word[j] = '\0' ; 
                            count ++ ;
                            score += 10 ;
                            display objD(10,life);
                            display::clearScreen(); 
                            objD.HUD(score,life);
                            objA.animate(life);
                            game::remaining(guess);
                            break;
                        }else if (alpha[0] != word[j]){
                            if (j == word.length()-1){
                                life --;
                                display objD(life);
                                display::clearScreen();
                                objD.HUD(score,life);
                                objA.animate(life);
                                game::remaining(guess);
                                break;
                            }
                        }
                    }
                }
            if (life == 0){
                cout << endl;
                cout << "\t\t\t\t\t\t\t\t+--------------------------------------------------------+" << endl;
                cout << "\t\t\t\t\t\t\t\t|                        GAME OVER                       |" << endl;
                cout << "\t\t\t\t\t\t\t\t+--------------------------------------------------------+" << endl;
                cout << "\t\t\t\t\t\t\t\t|                                                        |" << endl;
                cout << "\t\t\t\t\t\t\t\t|  The answer is: " << temp_word << endl;
                cout << "\t\t\t\t\t\t\t\t|                                                        |" << endl;
                cout << "\t\t\t\t\t\t\t\t|  Hey " << game::name << ", you scored " << game::score << " points!" << endl;
                cout << "\t\t\t\t\t\t\t\t|                                                        |" << endl;
                cout << "\t\t\t\t\t\t\t\t|  Your score has been added to our history. Thanks for  |" << endl;
                cout << "\t\t\t\t\t\t\t\t|  playing!                                              |" << endl;
                cout << "\t\t\t\t\t\t\t\t|                                                        |" << endl;
                cout << "\t\t\t\t\t\t\t\t+--------------------------------------------------------+" << endl;
                objHighscore.writeHis(name,category,score);
                life = 7 ; 
                score = 0 ;
                cout << "\t\t\t\t\t\t\t\t" << system("pause") ;
                display::clearScreen(); 
                return 0 ; 
            } 
            else {
                display::clearScreen();
                game::inGame();
            }
};

#endif