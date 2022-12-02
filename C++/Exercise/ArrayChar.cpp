#include<iostream>
using namespace std;

int main()
{
    char a[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        cout<<endl<<"Enter char: ";
        cin>>a[i];
    }

    for (i = 0; i < 5; i++)
    {
        cout<<endl<<"a["<<i<<"] = "<<a[i];
    }

    return 0;
}