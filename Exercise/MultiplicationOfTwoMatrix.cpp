#include<iostream>
using namespace std;

int main()
{
    int i, j;

    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
           cout<<a[i][j];
           cout<<b[j][i];
        }
        cout<<endl;

    }
    
    return 0;
}