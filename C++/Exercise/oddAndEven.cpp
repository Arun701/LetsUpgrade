/*
Any integer is input through the keyboard. Write a program to 
find out whether it is an odd number or even number.
*/

#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<endl<<"Enter number to find even and odd: ";
    cin>>num;

    if (num == 1)
    {
        cout<<endl<<"1 is a prime number";
    }
    else if (num == 0)
    {
        cout<<endl<<"Niether even nor odd, and not a prime";
    }
    else
    {
        if (num % 2 == 0)
        {
            cout<<endl<<"Even number";
        }
        else
        {
            cout<<endl<<"Odd number";
        }
    }
    
    return 0;
}