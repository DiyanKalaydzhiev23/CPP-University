#include "task.cpp"

using namespace std;
int maina() {
    int n;
    std::cin >> n;
    readMatrix(n);

    string command;
    while (true) {
        if (!(std::cin >> command)) {
            std::cout << "Failed to read next command. Exiting." << std::endl;
            break;
        }

        if (command == "End") {
            std::cout << "Maybe I can live like that" << std::endl;
            break;
        }

        bool endGame = false;
        string message;

        // Move 'M'
        if (voodooCounterYou == 0) {
            tie(endGame, message) = moveCharacter(YOU, positionYou, command[0]);
            if (endGame) {
                std::cout << message << std::endl;
                break;
            }
        } else {
            --voodooCounterYou;
        }

        // Move 'X'
        if (voodooCounterX == 0) {
            tie(endGame, message) = moveCharacter(CRAZY_X, positionX, command[0]);
            if (endGame) {
                std::cout << message << std::endl;
                break;
            }
        } else {
            --voodooCounterX;
        }

        // Check if command is 'End'
        if (command == "End") {
            std::cout << "Maybe I can live like that" << std::endl;
            break;
        }
    }

    return 0;
}