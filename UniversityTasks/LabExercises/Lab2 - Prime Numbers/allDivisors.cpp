#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int allDivisors() {
    int num, divisors = 0, counter = 1;

    cin >> num;

    if (num < 2 || num > 2000) {
        cout << "Invalid input data!";
    } else {
        // O(n) performance
        while (counter <= num) {
            if (num % counter == 0)
                divisors++;

            counter++;
        }

        cout << divisors << endl;
    }

    return 0;
}