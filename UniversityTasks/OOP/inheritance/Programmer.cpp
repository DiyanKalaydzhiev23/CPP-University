#include "Programmer.h"
#include <string>
#include <utility>

using std::string;

Programmer::Programmer():Employee() {
    this -> position = "";
}

Programmer::Programmer(string position, string name, float salary):Employee(std::move(name), salary) {
    this -> position = std::move(position);
}

Programmer::Programmer(const Programmer &other):Employee(other) {
    this -> position = other.position;
}
