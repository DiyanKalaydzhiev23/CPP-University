#ifndef POLYMORPHISM_AND_ABSTRACTION_EXECUTIVE_H
#define POLYMORPHISM_AND_ABSTRACTION_EXECUTIVE_H

#include "Manager.h"

#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;

class Executive : public Manager {
    public:
        Executive();
        Executive(string name, float salary, float experience, string department);

        void printExecutive();
};


#endif //POLYMORPHISM_AND_ABSTRACTION_EXECUTIVE_H
