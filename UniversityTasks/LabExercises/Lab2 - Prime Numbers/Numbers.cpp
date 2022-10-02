#include <iostream>; 
using namespace::std;
 
int main()
{
int matrix[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};

int sum = 0;

for (int i=0; i<4; i++)
    for (int j=0; j<4; j++)
        if (matrix[i][j]%2!=0 && i!=j)
            sum+=matrix[i][j];

cout<<sum;            
return 0;
}