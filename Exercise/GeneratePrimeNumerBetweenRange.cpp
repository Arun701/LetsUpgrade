#include<iostream>
using namespace std;

int main()
{
    int number, i, count, SV, EV;

    cout<<endl<<"Enter starting range number: ";
    cin>>SV;

    cout<<endl<<"Enter ending range number: ";
    cin>>EV;

    for (number = SV; number <= EV; number++)
    {
        count = 0;

        for ( i = 1; i <= number; i++)
            {
                if (number % i == 0)
                {
                    count++;
                }
        
            }
        if (count == 2 || count == 1)
        {
            cout<<number<<" ";
        }
    }
    

    return 0;
}