/*
If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits.
*/

#include<iostream>
using namespace std;

int main()

{
    int number, sum, n1, n2, n3, n4, n5;

    cout<<endl<<"Enter five digit number: ";
    cin>>number;

    n1 = number%10;
    number = number/10;

    n2 = number%10;
    number = number/10;

    n3 = number%10;
    number = number/10;

    n4 = number%10;
    number = number/10;

    n5 = number%10;
    number = number/10;

    sum = n1 + n2 + n3 + n4 + n5;
    
    cout<<"Sum of five digit number: "<<sum;

    return 0;
}