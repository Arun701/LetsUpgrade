#include<iostream>
using namespace std;

int main()
{
    char a[] = {'a', 'b', 'c', 'd', 'e'};
    int i;

    for (i = 0; i < 5; i++)
    {
        cout<<endl<<"a["<<i<<"] = "<<a[i];
    }

    return 0;
}