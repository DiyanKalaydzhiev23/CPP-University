# include <iostream>
using namespace std;

int main() {

	string name;
	cin >> name;

	int projects;
	cin >> projects;

	cout << "The architect " << name
		<< " will need " << projects * 3
		<< " hours to complete " << projects
		<< " project/s.";

	return 0;
}
