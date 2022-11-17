#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>   

using std::cout;
using std::cin;
using std::endl;

int main() {
    unsigned char symbol;
    srand(time(NULL));

    while (true) {
        symbol = (char)(rand() % 256);
        cout << symbol;
        Sleep(100); 
    }
}