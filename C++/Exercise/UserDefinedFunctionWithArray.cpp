#include<iostream>
using namespace std;

int sum(int[]);

//Defining main function...

int main()
{
    int i, a[5], addition;

    for (i = 0; i < 5; i++)
    {
        cout<<endl<<"Enter the number: ";
        cin>>a[i];
    }

    addition = sum(a);
    cout<<endl<<"Sum of numbers: "<<addition;

    return 0;
}

//Defining user defined function...
int sum(int n[5])
{
    int i, sum = 0;

    for (i = 0; i < 5; i++)
    {
        sum += n[i];
    }

    return(sum);
}