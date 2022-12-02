#include<iostream>
using namespace std;

int main()
{
    int number, i, count = 0;

    cout<<endl<<"Enter number: ";
    cin>>number;

    if (number == 1)
    {
        cout<<endl<<number<<" is a prime number";
    }
    else
    {
        for ( i = 1; i <= number; i++)
            {
                if (number % i == 0)
                {
                    count++;
                }
        
            }
        if (count == 2)
        {
            cout<<endl<<number<<" is a prime number";
        }
        else
            cout<<endl<<number<<" is not a prime number";
    }

    return 0;
}