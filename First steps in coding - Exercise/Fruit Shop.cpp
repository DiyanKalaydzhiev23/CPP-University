#include <iostream>
using namespace std;

int main() {
	double strawberriesPrice;
	double bananas;
	double oranges;
	double raspberries;
	double strawberries;
	double totalPrice = 0;
	
	cin >> strawberriesPrice;
	cin >> bananas;
	cin >> oranges;
	cin >> raspberries;
	cin >> strawberries;

	double raspberryPrice = strawberriesPrice / 2;
	double orangesPrice = raspberryPrice * 0.60;
	double bananasPrice = raspberryPrice * 0.20;
	
	totalPrice += bananas * bananasPrice;
	totalPrice += oranges * orangesPrice;
	totalPrice += raspberries * raspberryPrice;
	totalPrice += strawberries * strawberriesPrice;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << totalPrice;

	return 0;
}
