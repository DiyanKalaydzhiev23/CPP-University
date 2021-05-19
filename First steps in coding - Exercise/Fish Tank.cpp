#include <iostream>
using namespace std;

int main() {
	
	int lenght;
	int width;
	int height;
	double usedPercent;

	cin >> lenght;
	cin >> width;
	cin >> height;
	cin >> usedPercent;

	int v = lenght * width * height;
	double litersMax = v * 0.001;
	double litersNeeded = litersMax * (1 - (usedPercent * 0.01));

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << litersNeeded;

	return 0;
}
