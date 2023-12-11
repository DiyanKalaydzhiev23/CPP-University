#include <iostream>

using namespace std;

int fun(int);

int main() {
    float k=3;
    fun(k=fun(fun(k)));
    cout << k << endl;

    return 0;
}

int fun(int i) {
    i++;
    return i;
}
