#include <iostream>
using namespace std;

int main() {
	
	int rent;
	cin >> rent;

	double cake = rent * 0.20;
	double drinks = cake - cake * 0.45;
	double animator = rent / 3;

	cout << rent + cake + drinks + animator;

	return 0;
}
