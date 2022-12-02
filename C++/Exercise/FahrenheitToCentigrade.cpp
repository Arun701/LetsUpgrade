/*
Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees.
*/

#include<iostream>
using namespace std;

int main()

{
    float Fahrenheit, Centigrade;

    cout<<endl<<"Enter city tempreture in Fahrenheit: ";
    cin>>Fahrenheit;

    Centigrade = ((Fahrenheit - 32)*5)/ 9;

    cout<<endl<<"City tempreture in Centigrade: "<<Centigrade;

    return 0;
}