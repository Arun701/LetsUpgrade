#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<endl<<"Enter the number: ";
    cin>>num;

    if (num % 2 == 0)
    {
        cout<<endl<<num<<" is even number";
    }
    else
    {
        cout<<endl<<num<<" is odd number";
    }
    
    return 0;
}