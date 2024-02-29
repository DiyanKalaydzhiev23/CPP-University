#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int F = 108356;

double f(double x, double a) {
    return pow(x, 5) - 2 * pow(x, 3) - a * pow(x, 2) - x - (F % 100);
}

double bisection(double a, double low, double high, double tol) {
    double mid, lastMid = low - 1, fMid;

    while ((high - low) > tol) {
        mid = (low + high) / 2.0;

        if (mid == lastMid) {
            break;
        }

        fMid = f(mid, a);

        if (fabs(fMid) < tol) {
            return mid;
        }

        if ((f(low, a) * fMid) <= 0) {
            high = mid;
        } else {
            low = mid;
        }

        lastMid = mid;
    }

    return mid;
}


int main() {
    double a;

    while (cin >> a) {
        double root = bisection(a, 0, 10, 1e-19);


        if (fabs(f(root, a)) > 1e-19)
            cout << "NO SOLUTION" << endl;
        else
            cout << setprecision(20) << root << endl;
    }

    return 0;
}
