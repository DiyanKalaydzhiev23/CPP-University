#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int num, power, biggestPower = 0;

    cin >> num;

    for (int i = 0; i <= biggestPower; i++) {
        if (pow(num, i) > num) break;

        biggestPower = i;
    }

    cout << biggestPower;

}