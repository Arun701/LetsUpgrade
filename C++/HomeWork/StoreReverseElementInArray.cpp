#include<iostream>
using namespace std;

int main()
{
    int a[10], b[10], Number, i;

    for (i = 0; i < 10; i++)
    {
        cout<<endl<<"Enter number: ";
        cin>>Number;

        a[i] = Number;
    }

    for (i = 0; i < 10; i++)
    {
        b[i] = a[9 - i];
    }

    for (i = 0; i < 10; i++)
    {
        cout<<endl<<"b["<<i<<"] = "<<b[i];
    }
    
    return 0;
}