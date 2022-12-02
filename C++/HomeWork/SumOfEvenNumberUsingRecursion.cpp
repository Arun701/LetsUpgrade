#include<iostream>
using namespace std;

int sumOfEvenNumber(int);

int main()
{
    int sum, number;

    cout<<endl<<"Enter the number: ";
    cin>>number;

    sum = sumOfEvenNumber(number);

    cout<<"Sum of even number: "<<number<<" is"<<sum;
    return 0;
}

int sumOfEvenNumber(int n)
{
    int evenSum = 0;

    if (n % 2 == 0)
    {
        evenSum = evenSum + sumOfEvenNumber(n-1);
    }
    else
    {
        sumOfEvenNumber(n-1);
    }
    
    return evenSum;
}