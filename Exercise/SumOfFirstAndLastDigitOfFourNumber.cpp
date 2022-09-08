/*
If a four-digit number is input through the keyboard, write a 
program to obtain the sum of the first and last digit of this 
number.
*/

#include<iostream>
using namespace std;

int main()

{
    int number, sum, n1, n2, n3, n4;

    cout<<endl<<"Enter four digit number: ";
    cin>>number;

    n1 = number%10;
    number = number/10;

    n2 = number%10;
    number = number/10;

    n3 = number%10;
    number = number/10;

    n4 = number%10;
    number = number/10;

    sum = n1 + n4;
    
    cout<<"Sum of first and last digit of four number: "<<sum;
    
    return 0;
}