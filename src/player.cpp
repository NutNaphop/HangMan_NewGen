#include <iostream>
using namespace std;
class HistoryPlayer {
    public:
        string name[10], mode[10];
        int score[5];
        void getPlayer() {
            for(int i=0; i<5; i++) {
                cout << "Name : ";
                cin >> name[i];
                cout << "Mode : ";
                cin >> mode[i];
                cout << "Score : ";
                cin >> score[i];
            }
        }
        void showHistory() {
            cout << "\n" << "name" << "\t" << "mode" << "\t" << "score" << endl;
            for(int n=0; n<5; n++) {
                cout << name[n] << "\t" << mode[n] << "\t" << score[n] << endl; 
            }
        }
};
int main() {
    HistoryPlayer player;
    player.getPlayer();
    player.showHistory();
}