#include "Employee.h"

#include <string>
#include <utility>

using std::string;

Employee::Employee() {
    this -> name = "";
    this -> salary = 0;
    this -> experience = 0;
}

Employee::Employee(string name, float salary, float experience) {
    this -> name = std::move(name);
    this -> salary = salary;
    this -> experience = experience;
}