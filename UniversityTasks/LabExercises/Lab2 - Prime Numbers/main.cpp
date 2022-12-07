#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int num, divisorsSum = 0, counter = 1;

    cin >> num;

    if (num < 2 || num > 2000) {
        cout << "Invalid input data!";
    } else {
        while (counter <= num) {
            counter++;

            if (num % counter != 0) continue;

            bool isPrime = true;
            for (int i = 2; i <= sqrt(counter); i++) {
                if(counter % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) divisorsSum += counter;
        }

        cout << divisorsSum << endl;
    }

    return 0;
}
