#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Print the top border
    cout << "+------------------------------------------------------------------+" << endl;

    // Print the status bar
    int score = 0;
    int level = 1;
    int lives = 3;
    cout << "|  Score: " << setw(7) << setfill('0') << score;
    cout << "         Level: " << setw(2) << level;
    cout << "         Lives: ";
    for (int i = 0; i < lives; i++) {
        cout << "***";
    }
    cout << "        |" << endl;

    // Print the bottom border
    cout << "+------------------------------------------------------------------+" << endl;

    return 0;
}
