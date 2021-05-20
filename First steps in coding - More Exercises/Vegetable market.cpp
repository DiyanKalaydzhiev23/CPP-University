#include <iostream>
using namespace std;

int main() {

	double vegetablesPrice;
	double fruitsPrice;
	int vegetablesKg;
	int fruitsKg;

	cin >> vegetablesPrice;
	cin >> fruitsPrice;
	cin >> vegetablesKg;
	cin >> fruitsKg;

	double vegetablesTotal = vegetablesPrice * vegetablesKg;
	double fruitsTotal = fruitsPrice * fruitsKg;
	double totalSum = (vegetablesTotal + fruitsTotal) / 1.94;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << totalSum;

	return 0;
}
