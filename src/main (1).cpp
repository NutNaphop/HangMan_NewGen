#include <iostream>
using namespace std;
class Highscore {
    public:
        string name[10],high_name;
        int score[5],high_score;
        void showHighscore() {
            cout << high_name << ": Highest score -> " << high_score << endl;
        }
        void findHighscore() {
            high_score = score[0];
            high_name = name[0];
            for(int n=0; n<5; n++) {
                if(score[n] > high_score) {
                    high_score = score[n];
                    high_name = name[n];
                }
            }
        }
        void getPlayer() {
            for(int i=0; i<2; i++) {
                cout << "Name : ";
                cin >> name[i];
                cout << "Score : ";
                cin >> score[i];
            }
        }
};
int main() {
    Highscore player;
    player.getPlayer();
    player.findHighscore();
    player.showHighscore();
}

