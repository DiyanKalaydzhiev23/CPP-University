#include <iostream>

using namespace std;
using std::max;

int lcm(int x,int y, int z) {
    int maxNumber, lcom, count, flag = 0;

    maxNumber = max(x, y);
    maxNumber = max(maxNumber, z);    
    
    for (count = 1; flag == 0; count++) {
        lcom = maxNumber * count;

        if (lcom % x == 0 && lcom % y == 0 && lcom % z == 0)
            flag = 1;
    }

    return lcom;
}

int main() {
    int x, y, z;

    cin >> x;
    cin >> y;
    cin >> z;

    cout << lcm(x, y, z);

    return 0;
}
