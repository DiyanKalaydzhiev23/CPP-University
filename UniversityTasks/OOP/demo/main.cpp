#include "Student.h"
#include <iostream>
#include <windows.h>
#include <clocale>

using namespace std;

int main() {
    setlocale(0, "Bulgarian");
    SetConsoleOutputCP(866);

    Student s;
//    s.read();

    Student ivan("Иван Иванов", 5.67);
    cout << "По-добър стъдент ли е " << ivan.getName() << " от " << s.getName() << "? " << boolalpha << ivan.is_better_than(s) << endl;

    return 0;
}
