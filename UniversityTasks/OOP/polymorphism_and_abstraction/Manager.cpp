#include "Manager.h"

#include <iostream>
#include <utility>

using std::cout;
using std::endl;

Manager::Manager() : Employee() {
    this->department = "";
}

Manager::Manager(
        string name,
        float salary,
        float experience,
        string department
) : Employee(std::move(name), salary, experience) {
    this -> department = std::move(department);
}

void Manager::getManagerInfo() {
        cout <<
            this -> name << ", " <<
            this -> salary << ", " <<
            this -> experience << ", " <<
            this -> department
        << endl;
}