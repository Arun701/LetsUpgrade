/*
If a five-digit number is input through the keyboard, write a 
program to reverse the number. 
*/

#include<iostream>
using namespace std;

int main()

{
    int number, n1, n2, n3, n4, n5;

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
    
    cout<<"Revirse of five digit number: "<<n1<<n2<<n3<<n4<<n5;
    
    return 0;
}