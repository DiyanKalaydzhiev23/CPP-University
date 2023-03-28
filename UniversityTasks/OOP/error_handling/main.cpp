#include <iostream>
#include <windows.h>
#include <clocale>

#include "People.h"
#include "Student.h"

using namespace std;

int main() {
    setlocale(0, "Bulgarian");
    SetConsoleOutputCP(866);

    People *arrPeople[3];

    arrPeople[0] = new People("Иван Иванов", "8904123648");
    arrPeople[1] = new Student("Мария Георгиева", "9206066055", "F32324", 5.45);
    arrPeople[2] = new Student("Станимир Лалов", "9311123040", "F121234", 4.34);

    for (auto &student: arrPeople) {
        cout << "Име: " << student -> get_name() << " ЕГН: " << student -> get_egn() << endl;

        student -> print();
    }

    return 0;
}