#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    int numberToGuess = 1 + (rand() % 100);
    cout << numberToGuess;
    int playerInput = 0;

    while (playerInput != numberToGuess) {
        cout << "Enter a number to guess: ";
        cin >> playerInput;
    }

    cout << "You guessed it. The number is: " << numberToGuess << endl;

    return 0;
}