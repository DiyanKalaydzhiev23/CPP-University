#ifndef POLYMORPHISM_AND_ABSTRACTION_MANAGER_H
#define POLYMORPHISM_AND_ABSTRACTION_MANAGER_H

#include "Employee.h"

#include <string>

class Manager: public Employee {
    public:
        Manager();
        Manager(string name, float salary, float experience, string department);

        void getManagerInfo();

    protected:
        string department;
};


#endif //POLYMORPHISM_AND_ABSTRACTION_MANAGER_H
