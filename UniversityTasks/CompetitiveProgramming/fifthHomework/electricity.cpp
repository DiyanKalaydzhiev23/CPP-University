#include <iostream>
#include <vector>
#include <numeric> // За std::accumulate

using namespace std;

int maxComputersConnected(int n, int m, vector<int>& a, vector<int>& b) {
    // Общ брой гнезда тип A, минус един за всеки разклонител тип B
    int totalA = accumulate(a.begin(), a.end(), 0) - m;

    // Общ брой гнезда тип B, минус един за всеки разклонител тип A
    int totalB = accumulate(b.begin(), b.end(), 0) - n;

    // Първоначално свързваме един разклонител тип A с главния контакт
    int computersConnected = 1;

    // Добавяме максималния брой възможни компютри от тип A и B, като използваме по-малкия брой
    computersConnected += min(totalA, totalB);

    return computersConnected;
}

int main() {
    int t; // Брой тестови примери
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        cout << maxComputersConnected(n, m, a, b) << endl;
    }

    return 0;
}
😍