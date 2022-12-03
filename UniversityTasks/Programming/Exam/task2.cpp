#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int m;

    cout << "Enter the number m: ";
    cin >> m;

    int solution = pow(m  + 1, 2) + 2 * pow(m / 4, 5) - 6 / (m + 11) + 4 * m;

    cout << solution;
}