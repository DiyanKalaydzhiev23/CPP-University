#include <iostream>
using namespace std;

bool isValid(int x, int y, int n, char** maze, bool** visited) {
    return x >= 0 && x < n && y >= 0 && y < n && maze[x][y] != '#' && !visited[x][y];
}

bool findPath(int x, int y, int n, char partner, char** maze, bool** visited) {
    if (!isValid(x, y, n, maze, visited)) {
        return false;
    }

    if (maze[x][y] == partner) {
        return true;
    }

    visited[x][y] = true;

    // Move Up, Down, Left, Right
    if (findPath(x + 1, y, n, partner, maze, visited)) return true;
    if (findPath(x - 1, y, n, partner, maze, visited)) return true;
    if (findPath(x, y + 1, n, partner, maze, visited)) return true;
    if (findPath(x, y - 1, n, partner, maze, visited)) return true;

    // Backtrack if path not found
    visited[x][y] = false;
    return false;
}

int main() {
    int n;
    cin >> n;

    char you, partner;
    cin >> you >> partner;

    // Skip the newline after reading partner
    cin.ignore();

    // Dynamically allocate the maze and visited arrays
    char** maze = new char*[n];
    bool** visited = new bool*[n];

    for (int i = 0; i < n; ++i) {
        maze[i] = new char[n];
        visited[i] = new bool[n](); // initializes the array with 0's
    }

    int startX = -1, startY = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            maze[i][j] = cin.get(); // reads a single character

            if (maze[i][j] == you) {
                startX = i;
                startY = j;
            }
        }
        cin.ignore(); // otherwise the cin.get will get the \n char
    }

    if (findPath(startX, startY, n, partner, maze, visited)) {
        cout << "I’m here mi amor, let’s together search for the exit door" << endl;
    } else {
        cout << "I’m trapped by 4 walls with no HOpEleSsness" << endl;
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < n; ++i) {
        delete[] maze[i];
        delete[] visited[i];
    }
    delete[] maze;
    delete[] visited;

    return 0;
}
