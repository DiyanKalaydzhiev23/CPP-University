#ifndef INHERITANCE_EMPLOYEE_H
#define INHERITANCE_EMPLOYEE_H

#include "Employee.h"
#include <string>

using std::string;

class Employee {
    public:
        Employee();
        Employee(string name, float salary);

        Employee(const Employee &other);

        Employee& operator =(const Employee &other) = default;

        float getSalary() const { return salary; };
    protected:
        string name;
        float salary;
};


#endif //INHERITANCE_EMPLOYEE_H
