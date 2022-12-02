#include<iostream>
using namespace std;

void primeNumber(int);

int main()
{
    int number;

    cout<<endl<<"Enter number to check prime number: ";
    cin>>number;

    primeNumber(number);

    return 0;
}

void primeNumber(int n)
{
    int count, i;

    if (n == 1)
    {
        cout<<endl<<n<<" is prime number.";
    }
    
    else
    {
        count = 0;

        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            cout<<endl<<n<<" is prime number.";
        }
        else
        {
            cout<<endl<<n<<" is not prime number.";
        }
    }  

}