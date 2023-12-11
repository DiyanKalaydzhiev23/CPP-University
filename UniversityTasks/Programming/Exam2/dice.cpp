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
    int sides, result;

    cout << "Enter the number of sides of the dice: ";
    cin >> sides;

    result = throwDice(sides);

    cout << "Your result is: " << result << endl;

    return 0;
}