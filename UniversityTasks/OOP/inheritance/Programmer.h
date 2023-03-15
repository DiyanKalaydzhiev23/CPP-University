#ifndef INHERITANCE_PROGRAMMER_H
#define INHERITANCE_PROGRAMMER_H

#include <string>
#include <iostream>
#include <sstream>
#include <vector>

#include "Employee.h"

using std::string;
using std::ostream;
using std::istream;
using std::vector;
using std::stringstream;
using std::cout;

class Programmer: public Employee {
    public:
        Programmer();
        Programmer(string position, string name, float salary);
        Programmer(const Programmer &other);

        friend ostream &operator <<(ostream  &output, Programmer &p) {
            output << p.getName();
            return output;
        }

        friend istream &operator >>(istream &is, Programmer &p) {
            string input;
            getline(is, input);

            stringstream ss(input);
            vector<string> tokens;
            string token;

            while (getline(ss, token, ',')) {
                tokens.push_back(token);
            }

            p.name = tokens[0];
            p.position = tokens[1];
            p.salary = stof(tokens[2]);

            return is;
        }

        string getName() const { return position + ", " + name; };

        Programmer& operator =(const Programmer &other) = default;

    private:
        string position;
};




#endif //INHERITANCE_PROGRAMMER_H
