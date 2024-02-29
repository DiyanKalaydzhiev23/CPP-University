#include <iostream>
#include <vector>

using namespace std;

int N;

int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

bool isValid(int x, int y, vector<vector<int>>& board) {
    return (x >= 0 && x < N && y >= 0 && y < N && board[x][y] == -1);
}

bool solveKTUtil(int x, int y, int movei, vector<vector<int>>& board) {
    int k, nextX, nextY;

    if (movei == N*N)
        return true;

    for (k = 0; k < 8; k++) {
        nextX = x + dx[k];
        nextY = y + dy[k];

        if (isValid(nextX, nextY, board)) {
            board[nextX][nextY] = movei;
            if (solveKTUtil(nextX, nextY, movei + 1, board))
                return true;
            else
                board[nextX][nextY] = -1;
        }
    }

    return false;
}

pair<int, int> translateStartPosition(int x, int y) {
    // Translate so that (1, 1) becomes (0, 0)
    return {N - y, x - 1};
}

bool solveKT(int startX, int startY) {
    vector<vector<int>> board(N, vector<int>(N, -1));
    board[startX][startY] = 0;

    if (!solveKTUtil(startX, startY, 1, board)) {
        cout << "Solution does not exist";
        return false;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }

    return true;
}

//int main() {
//    cin >> N;
//
//    int x, y;
//    cin >> x >> y;
//
//    auto [startX, startY] = translateStartPosition(x, y);
//
//    solveKT(startX, startY);
//
//    return 0;
//}
