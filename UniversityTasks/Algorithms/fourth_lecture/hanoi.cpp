#include <iostream>

using namespace std;

void printMovement(int n, char startRod, char endRod) {
    cout << "Moving disk: " << n << " from " << startRod << " to " << endRod << endl; 
}

void towerOfHanoi(int n, char startRod, char endRod, char helpRod) {
    if (n == 1) {
        printMovement(n, startRod, endRod);
        return;
    } 

    towerOfHanoi(n - 1, startRod, helpRod, endRod);
    printMovement(n, startRod, endRod);
    towerOfHanoi(n - 1, helpRod, endRod, startRod);
}

int main() {
    towerOfHanoi(4, 'A', 'B', 'C');

    return 0;
}