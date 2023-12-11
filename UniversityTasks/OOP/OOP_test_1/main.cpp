#include <iostream>
#include "Cookie.h"

int main() {
    char * flour = new char[11];

    Cookie c = Cookie(10, true, flour);
    c.print();

    return 0;
}
