/*
Write a program to convert Celsius to Fahrenheit
Conversion algorithm
F = C × 9 ÷ 5 + 32
*/

#include<iostream>
using namespace std;

int main()
{
    int C, F;

    cout<<endl<<"Enter the tempreture in celsius: ";
    cin>>C;

    F = C * 9 / 5 + 32;

    cout<<endl<<"Tempreture in fahrenheit: "<<F;
    
    return 0;
}
