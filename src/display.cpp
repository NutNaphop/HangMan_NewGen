#include "../library/mylib.hpp"
#ifndef DISPLAY
#define DISPLAY
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
    
void menugame::showVocab(){
        cout << "+======================================================+" << endl;
        cout << "|                     VOCABULARY                       |" << endl;
        cout << "+======================================================+" << endl;
        cout << "| ---> Animal <---                                     |" << endl;
        cout << "| Dog     Cat     Rabbit       Elephant    Butterfly   |" << endl;
        cout << "| Donkey  Slug    Hummingbird  Chameleon   Bat         |" << endl;
        cout << "| Prawn   Moth    Weasel       Raccoon     Tapir       |" << endl;
        cout << "| Swan    Parrot  Shark        Turkey      Crocodie    |" << endl;
        cout << "| ---> Country <---                                    |" << endl;
        cout << "| Thailand  China    Korea     Japan    Afghanistan    |" << endl;
        cout << "| Algeria   Bolivia  Cuba      Egypt    Ethiopia       |" << endl;
        cout << "| France    Iran     Laos      Mali     Kazakhstan     |" << endl;
        cout << "| Poland    Tonga    America   Mexico   Switzerland    |" << endl;
        cout << "+======================================================+" << endl;
        cout << "You are done browsing, please select the next desired choice." << endl;
        cout << "[1]playgame/[2]back to menu : ";
        do {
        cin >> choice;
            if(choice == "1"){
            // playGame();
        }
            else if(choice == "2"){
            // system clear 
            }
            else{
            	cout << "Wrong Choice Please Try Again" << endl ; 
            	menugame::showVocab();
			}
		}while(isalpha(choice[0]) || choice.length() >2);
};

void menugame::showHowto(){
	 	cout << "+=============================================================================+" << endl;
        cout << "|                           HOW TO PLAY HANGMAN GAME                          |" << endl;
        cout << "+=============================================================================+" << endl;
        cout << "| 1.Select 1 on the menu page to play HANGMAN GAME.                           |" << endl;
        cout << "| 2.Select the word category you want to play.                                |" << endl;
        cout << "| 3.The program will have a "-" on the syllables of the word,                 |" << endl;
        cout << "|   the number of your life and a beam with a noose hanging down.             |" << endl;
        cout << "|   3.1 You have to guess 1 letter per 1 round, you will have 5 life,         |" << endl;
        cout << "|       i.e. the number of times you can answer incorrectly.                  |" << endl;
        cout << "|    - if there is that letter in the word, life will be the same and         |" << endl;
        cout << "|      will get 10 points.                                                    |" << endl;
        cout << "|    - If guessed wrong, life will be reduced by one. same score              |" << endl;
        cout << "|      But there will be a head, arms, legs, respectively.                    |" << endl;
        cout << "| 4.When you guess the word correctly before life runs out.                   |" << endl;
        cout << "|   will be able to start the next game immediately And will keep your        |" << endl;
        cout << "| 5.If you guess until life runs out The system will show the current score   |" << endl;
        cout << "|   and answer that word.                                                     |" << endl;
        cout << "+=============================================================================+" << endl;
        cout << "You are done browsing, please select the next desired choice." << endl;
        cout << "[1]playgame/[2]back to menu : ";
        do {
        	cin >> choice;
        	if(choice == "1"){
            	// menugame::startGame();
        	}
        	else if(choice == "2"){
            	// system clear 
        	}
        	else{
            	cout << "Wrong Choice Please Try Again" << endl ; 
            	menugame::showHowto();
			}
		}while(isalpha(choice[0]) || choice.length() >2);
}
int menugame::showMenu() {
        cout << "+================================================+" << endl;
        cout << "|            WELCOME TO HANGMAN GAME             |" << endl;
        cout << "+================================================+" << endl;
        cout << "|    [1] Playgame                                |" << endl;
        cout << "|    [2] Howtoplay                               |" << endl;
        cout << "|    [3] Highscore                               |" << endl;
        cout << "|    [4] Vocabulary                              |" << endl;
        cout << "|    [5] Exit                                    |" << endl;
        cout << "+================================================+" << endl;
        do {
            cout << "Please select the desired choice : ";
            cin >> choice;
            if(choice == "1"){
            	return 1;
            }
            else if(choice == "2"){
                 return 2;
            }
            else if(choice == "3"){
                return 3;
            }
            else if(choice == "4"){
                return 4 ;
            }
            else if(choice == "5"){
                cout << "***** Thank you for joining in the fun of Hangman. *****" << endl;
                system("pause");
                exit(1);
            }
            else{
                cout << "!!! You haven't' select the right choice, Choose again. !!!" << endl;
                return 404 ;
            }
		}while (isalpha(choice[0]) || choice.length() >2);
};
void highscore::importScore(){
        ifstream myfile("../text/history.txt");
        while (!myfile.eof()){
            getline(myfile, line);
            stringstream ss(line);
            ss >> name >> mode >> score;
            scores_.push_back(make_tuple(name, mode, score));
            // cout << "Name: " << name << " Mode: " << mode << " Score : " << score << endl;
            
        }
        myfile.close() ;
}
void highscore::sortByScoreDescending() {
        sort(scores_.begin(), scores_.end(), [](const auto& a, const auto& b) {
            return get<2>(a) > get<2>(b);
        });
    }
void highscore::display(){
        cout << "Name\t" << "Mode\t" << "Score\t" << endl ; 
        for (const auto& entry : scores_) {
            cout << get<0>(entry) << "\t" << get<1>(entry) << "\t" << get<2>(entry) << endl;
        }
    }
void highscore::writeHis(string name , string mode , int score){
    ofstream myfile("../text/history.txt",ios::app) ;
    if (myfile.is_open()){
        myfile << "\n" << name << " " << mode << " " << score ;
        myfile.close();
    }
    else{
        cout << "File Not Found" << endl ;
    }
}

// int main(){
//     highscore obj;
//     obj.importScore();
//     obj.sortByScoreDescending();
//     obj.display();
// }
#endif