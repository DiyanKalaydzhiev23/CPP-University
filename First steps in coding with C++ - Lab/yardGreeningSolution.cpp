#include <iostream>
using namespace std;

int main() {

	double squareMeters;
	cin >> squareMeters;

	double totalPrice = squareMeters * 7.61;
	double discount = totalPrice * 0.18;
	double finalPrice = totalPrice - discount;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "The final price is: "
		<< finalPrice << " lv." << endl;
	cout << "The discount is: "
		<< discount << " lv.";

	return 0;

}
