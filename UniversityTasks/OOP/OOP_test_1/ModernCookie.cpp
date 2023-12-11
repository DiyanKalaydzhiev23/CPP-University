#include "ModernCookie.h"

#include <iostream>

using std::cout;
using std::endl;

ModernCookie::ModernCookie(int edges, bool isBaked, char *flour, bool isVegan) : Cookie(5, isBaked, flour) {
    this -> shape = Shape(edges);
}

void ModernCookie::print() {
    Cookie::print();

    cout << "Is vegan: " << this -> isVegan << endl;
}
