#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long int i = 5; i <= std::sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    long long int multiplier, size, currentNumber, primeNums;

    while (cin >> multiplier >> size) {
        primeNums = 0;
        
        for (long long int i = 1; i <= size; i++) {
            currentNumber = ((1 + sin(0.1 * i)) * multiplier) + 1; // thats the formula from the task
            if (isPrime(currentNumber)) primeNums++;
        }

        cout << primeNums << endl;
    }

    return 0;
};