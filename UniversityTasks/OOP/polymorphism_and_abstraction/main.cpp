#include <iostream>

#include "Executive.h"

int main() {
    Executive e = Executive("ivan", 15000, 9.5, "software");

    e.printExecutive();

    std::cout << "Hello, World!" << std::endl;
}
