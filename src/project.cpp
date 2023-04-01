#include <stdio.h>
#include <iostream>
using namespace std;

class Menugame {
    public :
        int choice,choose;
        void Menu(){
            cout << "+================================================+" << endl;
            cout << "|            WELCOME TO HANGMAN GAME             |" << endl;
            cout << "+================================================+" << endl;
            cout << "|    [1] Playgame                                |" << endl;
            cout << "|    [2] Howtoplay                               |" << endl;
            cout << "|    [3] Highscore                               |" << endl;
            cout << "|    [4] Vocabulary                              |" << endl;
            cout << "|    [5] Exit                                    |" << endl;
            cout << "+================================================+" << endl;
            cout << "Please select the desired choice : ";
            cin >> choice;
            if(choice == 1){
                playGame();
            }
            else if(choice == 2){
                howToplay();
            }
            else if(choice == 3){
                highScore();
            }
            else if(choice == 4){
                vocab();
            }
            else if(choice == 5){
                exit();
            }
            else{
                cout << "!!! You did not select the right choice, please choose again. !!!" << endl;
                Menu();
            }
        }
        void playGame(){
            cout << "Start!!!" <<endl;
        }
        void howToplay(){
            cout << "+=============================================================================+" << endl;
            cout << "|                           HOW TO PLAY HANGMAN GAME                          |" << endl;
            cout << "+=============================================================================+" << endl;
            cout << "| 1.Select 1 on the menu page to play HANGMAN GAME.                           |" << endl;
            cout << "| 2.Select the word category you want to play.                                |" << endl;
            cout << "| 3.The program will have a " " on the syllables of the word,                 |" << endl;
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
            cin >> choose;
            if(choose == 1){
                playGame();
            }
            else if(choose == 2){
                Menu();
        }
        void highScore(){
            cout << "Top5!!!" << endl;
            cout << "You are done browsing, please select the next desired choice." << endl;
            cout << "[1]playgame/[2]back to menu : ";
            cin >> choose;
        }
        void vocab(){
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
            cin >> choose;
            if(choose == 1){
                playGame();
            }
            else if(choose == 2){
                Menu();
            }
        }
        void exit(){
            cout << "***** Thank you for joining in the fun of Hangman. *****" << endl;
        }
};
main(){
    Menugame menu1;
    menu1.Menu();
}