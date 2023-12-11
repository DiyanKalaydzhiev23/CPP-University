#include <iostream>
#include <vector>

using namespace std;

int firstNum, secondNum, result = 0, index = 0;

int fibonacciIndex(int a, int b, int maxNum)
{
    while (result <= maxNum)
    {
        result = (a * secondNum) + (b * firstNum);
        firstNum = secondNum;
        secondNum = result;
        index++;
    }

    if (firstNum == maxNum)
    {
        return index;
    }

    return 0;
}

int main()
{

    int a, b, currentNum;
    int size;

    while (cin >> a >> b)
    {
        cin >> size;

        for (int i = 1; i <= size; i++)
        {
            cin >> currentNum;
            firstNum = 1;
            secondNum = 1;
            index = 1;
            cout << fibonacciIndex(a, b, currentNum) << endl;
            result = 0;
        }
    }

    return 0;
}