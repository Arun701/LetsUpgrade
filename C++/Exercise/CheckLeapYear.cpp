/*
Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not. 
*/

#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<endl<<"Enter the year in digit: ";
    cin>>year;

    if (year % 4 == 0)
    {
        cout<<endl<<"Leap year";
    }
    else
    {
        cout<<endl<<"Not a leap year";
    }
    
    
    return 0;
}