#include <iostream>
using namespace std;

int main() {

	double deposit;
	int months;
	double percent;

	cin >> deposit;
	cin >> months;
	cin >> percent;

	double finalSum = deposit + months
		* ((deposit * (percent / 100)) / 12);

	cout << finalSum;

	return 0;
}
