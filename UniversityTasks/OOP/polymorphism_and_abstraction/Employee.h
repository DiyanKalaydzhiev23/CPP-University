#ifndef POLYMORPHISM_AND_ABSTRACTION_EMPLOYEE_H
#define POLYMORPHISM_AND_ABSTRACTION_EMPLOYEE_H

#include <string>
#include <iostream>

using std::string;

class Employee {
    public:
        Employee();
        Employee(string name, float salary, float experience);


    protected:
        string name;
        float salary;
        float experience;
};


#endif //POLYMORPHISM_AND_ABSTRACTION_EMPLOYEE_H
