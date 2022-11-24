#include <iostream>
using namespace std;

int main() {
    string daysOfTheWeek[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    int dayIndex;

    cout << "Enter the number of the day (1- 7): ";
    cin >> dayIndex;

    cout << daysOfTheWeek[dayIndex - 1] << endl;

    return 0;
}