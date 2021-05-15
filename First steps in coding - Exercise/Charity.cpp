#include <iostream>
using namespace std;

int main() {
	
	int days;
	int bakers;
	int cakes;
	int waffles;
	int pancakes;

	cin >> days;
	cin >> bakers;
	cin >> cakes;
	cin >> waffles;
	cin >> pancakes;

	int totalCakes = cakes * 45;
	double totalWaffles = waffles * 5.80;
	double totalPancakes = pancakes * 3.20;
	double totalSum = (totalCakes + totalWaffles + totalPancakes)
		* bakers * days;
	double expences = totalSum / 8;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << totalSum - expences;

	return 0;
}
