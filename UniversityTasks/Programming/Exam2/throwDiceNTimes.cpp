#include <windows.h>
#include <unistd.h>
#include <iostream>
#include <stdlib.h>
#include <time.h> 

using std::cout;
using std::cin;
using std::endl;

int throwDice(int sides) {
    srand(time(NULL));

    return rand() % sides + 1;
}

int main() {
    int throwTimes, sides;

    cout << "Enter how any times you will throw the dice: ";
    cin >> throwTimes;

    cout << "Enter the sides of the dice: ";
    cin >> sides;

    int * results = new int(throwTimes);

    for (int i = 0; i < throwTimes; i++) {
        results[i] = throwDice(sides);
        sleep(1);
    }

    return 0;
}