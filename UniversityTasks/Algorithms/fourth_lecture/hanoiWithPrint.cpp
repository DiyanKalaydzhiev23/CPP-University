#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printRods(vector<int> rods[]);
void moveDisk(vector<int> rods[], int start, int end);

void printMovement(int n, char startRod, char endRod, vector<int> rods[]) {
    cout << "Move disk " << n << " from " << startRod << " to " << endRod << endl;
    moveDisk(rods, startRod - 'A', endRod - 'A');
    printRods(rods);
}

void moveDisk(vector<int> rods[], int start, int end) {
    rods[end].push_back(rods[start].back());
    rods[start].pop_back();
}

void printRods(vector<int> rods[]) {
    for (int i = 0; i < 3; i++) {
        cout << "Rod " << (char)('A' + i) << ": ";
        for (int disk : rods[i]) {
            cout << disk << " ";
        }
        cout << endl;
    }
    cout << "---------------" << endl;
}

void towerOfHanoi(int n, char startRod, char endRod, char helpRod, vector<int> rods[]) {
    if (n == 1) {
        printMovement(n, startRod, endRod, rods);
        return;
    }

    towerOfHanoi(n - 1, startRod, helpRod, endRod, rods);
    printMovement(n, startRod, endRod, rods);
    towerOfHanoi(n - 1, helpRod, endRod, startRod, rods);
}

int main() {
    int n = 4;
    vector<int> rods[3];

    for (int i = n; i >= 1; i--) {
        rods[0].push_back(i);
    }

    printRods(rods);
    towerOfHanoi(n, 'A', 'C', 'B', rods);

    return 0;
}
