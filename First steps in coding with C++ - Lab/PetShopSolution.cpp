#include <iostream>
using namespace std;

int main() {

	int dogs;
	cin >> dogs;

	int others;
	cin >> others;

	double totalFood = dogs * 2.50 + others * 4;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << totalFood << " lv.";

	return 0;
}
