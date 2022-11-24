#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main() {
    double grade;
    double grades[20];
    
    int counter = 0;

    while (true) {
        cout << "Enter grade (ot 2.00 do 6.00): ";
        cin >> grade;

        if (grade == 0) break;

        grades[counter] = grade;

        counter++;
        double sum = 0;

        for (int i = 0; i < counter; i++) {
            sum += grades[i];
        }

        cout << "Average grade: " << sum / counter << endl;
    }

    return 0;
}