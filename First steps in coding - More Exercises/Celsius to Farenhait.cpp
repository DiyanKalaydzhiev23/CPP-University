#include <iostream>
using namespace std;

int main() {

	double c;
	cin >> c;

	double f = c * 1.8 + 32;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << f;
	
	return 0;
}
