#include <iostream>
#include <climits>
#include <cctype>

using namespace std;

int main(void)
{

    unsigned int Anum, divThousand, divHundred, divTen, divOne, modThousand, modHundred, modTen, modOne;

    char RThousand; char RHundred; char RTen; char ROne;

    int I = 1;
    int IV = 4;
    int V = 5;
    int IX = 9;
    int X = 10;
    int L = 50;
    int C = 100;
    int D = 500;
    int M = 1000;

    RThousand = 'M';
    RHundred = 'C';
    RTen = 'X';
    ROne = 'I';

    cout << "\n\nPlease enter the number you would like to convert\n";
    cin >> Anum;

    divThousand = Anum / 1000;
    modThousand = Anum % 1000;
    divHundred = modThousand / 100;
    modHundred = modThousand % 100;
    divTen = modHundred / 10;
    modTen = modHundred % 10;
    divOne = modTen / 1;
    modOne = modTen % 1;

    RThousand = M * divThousand;
    RHundred = C * divHundred;
    RTen = X * divTen;
    ROne = I * divOne;

    cout << string( divThousand, 'M') << endl;
}


