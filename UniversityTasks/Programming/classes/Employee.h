#ifndef CLASSES_EMPLOYEE_H
#define CLASSES_EMPLOYEE_H

#include <string>

using std::string;


class Employee {
    public:
        Employee();
        Employee(char *name, float salary);
        ~Employee();

        char *get_name() const;
        float get_salary() const;

        void set_name(char *name);
        void set_salary(float salary);

        void say_something(const string& text);
    private:
        char *name;
        float salary;
};


#endif //CLASSES_EMPLOYEE_H
