#include "Employee.h"

#include <utility>


Employee::Employee() {
    this -> name = "";
    this -> salary = 0;
}

Employee::Employee(string name, float salary) {
    this -> name = std::move(name);
    this -> salary = salary;
}

Employee::Employee(const Employee &other) {
    this -> name = other.name;
    this -> salary = other.salary;
}

