#include <iostream>
using namespace std;

int main() {

	double CountPages;
	double pages;
	double days;

	cin >> CountPages;
	cin >> pages;
	cin >> days;

	double TotalTime = CountPages / pages;
	double HoursDaily = TotalTime / days;

	cout << HoursDaily;

	return 0;
}
