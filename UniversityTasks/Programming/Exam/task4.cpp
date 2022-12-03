#include <iostream>
#include <cstdlib>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int array[512];
    int number = -1, randomNumber, result;

    srand((unsigned) time(NULL)); 

    for (int i = 0; i < 512; i++) {  // not varvarsko :)
        cout << "Enter a number: ";
        cin >> number;

        if (number == 0) break;

        randomNumber = 1 + (rand() % 50);

        result = number + randomNumber;
        array[i] = result;

        cout << "The number is: " << result << endl;
    }

    cout << endl << "Thanks for using my for-while program :)";
}