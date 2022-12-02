#include<iostream>
using namespace std;

double division(double, double);

int main()
{
    int a, b;
    double result;

    cout<<endl<<"Enter first number: ";
    cin>>a;

    cout<<endl<<"Enter second number: ";
    cin>>b;

    result = division(a, b);

    cout<<endl<<"Division of two number: "<<result;

    return 0;
}

double division(double x, double y)
{
    return(x/y);
}