// task.cpp
#include "taskNamespace.cpp"
#include <vector>
#include <iostream>

using namespace taskNamespace;
using std::vector;
using std::pair;
using std::string;
static vector<vector<char>> matrix;
static pair<int, int> positionYou;
static pair<int, int> positionX;
static int voodooCounterYou = 0;
static int voodooCounterX = 0;

void spreadVoodoo(pair<int, int> pos) {
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int newX = pos.first + dx[i];
        int newY = pos.second + dy[i];

        if (newX >= 0 && newX < matrix.size() && newY >= 0 && newY < matrix[0].size() && matrix[newX][newY] == EMPTY) {
            matrix[newX][newY] = VOODOO;
        }
    }
}

// Function to read the matrix
void readMatrix(int n) {
    matrix.resize(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
            if (matrix[i][j] == YOU) {
                positionYou = {i, j};
            } else if (matrix[i][j] == CRAZY_X) {
                positionX = {i, j};
            }
        }
    }
}

void printMatrix() {
    for (auto& row : matrix) {
        for (char c : row) {
            std::cout << c << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

// Function to check if a move is possible
bool canMove(pair<int, int> position, char direction) {
    int n = matrix.size();
    int m = matrix[0].size();
    int dx = 0, dy = 0;
    switch (direction) {
        case 'U': dx = -1; break;
        case 'D': dx = 1; break;
        case 'L': dy = -1; break;
        case 'R': dy = 1; break;
    }
    int newX = position.first + dx;
    int newY = position.second + dy;
    if (newX >= 0 && newX < n && newY >= 0 && newY < m) {
        return true;
    }
    return false;
}

// Function to move the character in the matrix
std::tuple<bool, string> moveCharacter(char character, pair<int, int>& position, char direction) {
    int dx = 0, dy = 0;
    switch (direction) {
        case 'U': dx = -1; break;
        case 'D': dx = 1; break;
        case 'L': dy = -1; break;
        case 'R': dy = 1; break;
    }
    int newX = position.first + dx;
    int newY = position.second + dy;

    // If the move is outside the matrix
    if (newX < 0 || newX >= matrix.size() || newY < 0 || newY >= matrix[0].size()) {
        return {true, character == YOU ? "I'm finally free, let me find a new person to fix" : "X is now running from us"};
    }

    // If it's a voodoo doll
    if (matrix[newX][newY] == VOODOO) {
        if (character == YOU) {
            voodooCounterYou = 3;
        } else {
            spreadVoodoo(position);
        }
    }

    // If it's a love letter
    if (matrix[newX][newY] == LOVE_LETTER) {
        if (character == YOU) {
            int rightX = position.first;
            int rightY = position.second + 1;
            if (rightY < matrix[0].size() && matrix[rightX][rightY] == EMPTY) {
                matrix[rightX][rightY] = CRAZY_X;
                positionX = {rightX, rightY};
            } else {
                int leftX = position.first;
                int leftY = position.second - 1;
                if (leftY >= 0 && matrix[leftX][leftY] == EMPTY) {
                    matrix[leftX][leftY] = CRAZY_X;
                    positionX = {leftX, leftY};
                }
            }
        }
    }

    // Move the character
    matrix[position.first][position.second] = EMPTY;
    matrix[newX][newY] = character;
    position = {newX, newY};

    // Check if both characters are at the same position
    if (positionYou == positionX) {
        return {true, "X: Next stop my basement!"};
    }
    printMatrix();
    return {false, ""};
}
