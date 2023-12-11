#include <iostream>
#include <map>
#include <math.h>

using std::map;
using std::cout;
using std::endl;
using std::to_string;

void getOddNumbersOccurrenceDivision() {
    map<int, int> numbersMap;
    int numbers[12] = {12, 3, 4, 8, 4, 8, 12, 6, 3, 6, 12, 8};

    for (int num : numbers) {
        if (!numbersMap.count(num)) {
            numbersMap[num] = 0;
        }

        numbersMap[num] += 1;
    }

    bool dividedByThree;

    for (const auto &[key, value]: numbersMap) {
        if (value % 2 == 1) {
            dividedByThree = !(value % 3);
            cout << "The number " << key << " is"
                 << (dividedByThree ? " " : "not")
                 << "divided by 3" << endl;
        }
    }
}

void printRootsOfEquation(int a, int b, int c) {
    double x1, x2;
    int discriminant;

    if (a == 0) {
        if (b == 0) {
            discriminant = -c / b;
        } else {
            discriminant = c;
        }
    } else {
        discriminant = pow(b,2) - (4 * a * c);
    }

    if (discriminant < 0) {
        cout << "No roots" << endl;
        return;
    } else if (discriminant == 0) {
        x1 = x2 = -b / 2 * a;
    } else {
        x1 = (-b + sqrt(discriminant)) / 2 * a;
        x2 = (-b - sqrt(discriminant)) / 2 * a;
    }

    cout << "x1 is " << x1 << (
            x1 != x2
                ?
            " x2 is " + to_string(x2)
                :
            "")
    << endl;
}

int main() {
    printRootsOfEquation(1, 3, -4);
    return 0;
}
