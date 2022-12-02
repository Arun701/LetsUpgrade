#include<iostream>
using namespace std;

int main()
{
    int num, orig, rem, f = 0;

    cout<<endl<<"Enter a number to check, Is it a binary number: ";
    cin>>num;

    orig = num;

    if (num >= 0 && num <= 30000)
    {
        while (num != 0)
        {
            rem = num % 10;
            num = num / 10;

            if (rem == 0 || rem == 1)
            {
                f = 1;
            }
            else
            {
                f = 0;
                break;
            } 
        }

        if (f == 1)
        {
            cout<<endl<<orig<<" is a binary number.";
        }
        else
        {
            cout<<endl<<orig<<" is not a binary number.";
        }
    }
    else
        cout<<endl<<orig<<" is not between 0 and 30,000.";

    return 0;
}