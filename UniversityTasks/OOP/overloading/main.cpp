#include <iostream>
#include "Money.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Money price;
    Money price1 = Money(2, 49);
    Money price2 = Money(2, 50);

    bool price3 = price1 >= price2;

    cin >> price;

    cout << price << endl;

    return 0;
}
