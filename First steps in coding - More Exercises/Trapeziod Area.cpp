#include <iostream>
using namespace std;

int main() {
		
	double b1;
	double b2;
	double h;

	cin >> b1;
	cin >> b2;
	cin >> h;

	double s = (b1 + b2) * h / 2;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << s;

	return 0;
}
