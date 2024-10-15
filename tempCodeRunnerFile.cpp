#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Game {
private:
    string status;

public:
    Game() {
        status = "Not started";
    }

    void start() {
        if (status == "Started") {
            cout << "The game is already started." << endl;
        } else {
            status = "Started";
            cout << "Game has started." << endl;
        }
    }

    void pause() {
        if (status == "Started") {
            status = "Paused";
            cout << "Game is paused." << endl;
        } else if (status == "Paused") {
            cout << "The game is already paused." << endl;
        } else {
            cout << "Game is not started yet." << endl;
        }
    }

    void end() {
        if (status == "Started" || status == "Paused") {
            status = "Ended";
            cout << "Game has ended." << endl;
        } else if (status == "Ended") {
            cout << "The game is already ended." << endl;
        } else {
            cout << "Game is not started yet." << endl;
        }
    }

    void displayStatus(){
        cout << "Current game status: " << status << endl;
    }
};

int main() {
    Game game;
    int choice;

    do {
        cout << "\n--- Game Menu ---" << endl;
        cout << "1. Start Game" << endl;
        cout << "2. Pause Game" << endl;
        cout << "3. End Game" << endl;
        cout << "4. Display Game Status" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            game.start();
            break;
        case 2:
            game.pause();
            break;
        case 3:
            game.end();
            break;
        case 4:
            game.displayStatus();
            break;
        case 5:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
