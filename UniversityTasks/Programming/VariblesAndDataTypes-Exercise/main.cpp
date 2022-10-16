#include <iostream>
using namespace std;


void calculateMaleFemale(float totalCount, float males, float females) {
    double malesPercent, femalesPercent;

    malesPercent = males / totalCount * 100;
    femalesPercent = females / totalCount * 100;

    cout << "Males percent: " << malesPercent << "%" << endl;
    cout << "Females percent: " << femalesPercent << "%" << endl;
}

int main() {
    float totalCount, males, females;

    cout << "Enter the males count: ";
    cin >> males;

    cout << "Enter the females count: ";
    cin >> females; 

    calculateMaleFemale(males + females, males, females);

    return 0;
}