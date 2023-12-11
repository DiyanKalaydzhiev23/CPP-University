#include <cstring>
#include <iostream>

#include "Employee.h"


using std::cout;
using std::endl;


Employee::Employee() {
    this -> salary = 0;
    this -> name = new char[10];

    strcpy(this -> name, "Unknown");
}

Employee::Employee(char* name, float salary) {
    this -> set_name(name);
    this -> set_salary(salary);
}

Employee::~Employee() {
    delete[] name;
}

char *Employee::get_name() const {
    return this -> name;
}

float Employee::get_salary() const {
    return this -> salary;
}

void Employee::set_name(char *new_name) {
    int len = strlen(new_name);

    this -> name = new char[len + 1];

    strcpy(this -> name, new_name);
}

void Employee::set_salary(float salary) {
    this -> salary = salary;
}

void Employee::say_something(const string& text) {
    cout << this -> name << ": " << text << endl;
}
