#include <iostream>
#include "Employee.h"

using std::cout;
using std::endl;


int main() {
    Employee ivan = Employee("ivan", 25000);

    ivan.say_something( "Hello guys!");
    cout << ivan.get_name() << " is working for " << ivan.get_salary() << " leva" << endl;

    return 0;
}
