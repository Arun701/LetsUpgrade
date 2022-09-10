//Right solution ---------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int number, rem, rem2, length = 0, i, poweredNumber, N1, sum;

    cout<<endl<<"Enter number: ";
    cin>>number;
    //Counting the length
    N1 = number;
    while (N1 != 0)
    {
        rem = N1 % 10;
        N1 = N1 /10;

        //cout<<endl<<"Rem: "<<rem;
        //cout<<endl<<"Number: "<<N1;
        length++;
    }
    cout<<endl<<"length of the number: "<<length;

    // Calculate the power of the each digit and sum
    sum = 0, N1 = number;

    while (N1 != 0)
    {
        rem2 = N1 % 10;
        N1 = N1 /10;

        poweredNumber = 1;

        for(i = 1; i <= length; i++)
        {
            poweredNumber = poweredNumber*rem2;
        }
        cout<<endl<<"Powered number: "<<poweredNumber;
        sum = sum + poweredNumber;
    }    

    cout<<endl<<"Sum of the powered number: "<<sum;
    cout<<endl<<"Number: "<<number;

    if (sum == number)
    {
        cout<<endl<<number<<" is armstrong number";
    }
    else
    {
        cout<<endl<<number<<" is not armstrong number";
    }
    
    return 0;
}
