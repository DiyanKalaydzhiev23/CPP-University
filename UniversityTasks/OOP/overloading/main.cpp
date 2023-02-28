#include <iostream>
#include "Money.h"

using std::cout;
using std::endl;

int main() {
    Money price1 = Money(1000, 99);
    Money price2 = Money(2, 50);
    Money price3 = price1 / 3;

    cout << price3.getLeva() << '.' << price3.getStotinki() << endl;

    return 0;
}
