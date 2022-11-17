#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess;
    srand(time(NULL));

    cout << "Enter a number to be guessed: ";
    cin >> number;

    system("cls");

    do {
        //1 to 999 999
        guess = 
              rand() % 10 * 100000
            + rand() % 10 * 10000
            + rand() % 10 * 1000
            + rand() % 10 * 100
            + rand() % 10 * 10
            + rand() % 9 + 1;

        cout << guess << endl;

    } while (guess != number);

    cout << "Guessed it " << guess << endl;

    return 0;
}