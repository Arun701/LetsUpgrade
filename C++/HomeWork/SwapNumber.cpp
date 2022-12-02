#include<iostream>
using namespace std;

int main()
{
    int n1, n2, temp;

    cout<<endl<<"Enter the first number: ";
    cin>>n1;

    cout<<endl<<"Enter the second number: ";
    cin>>n2;

    temp = n1;
    n1 = n2;
    n2 = temp;

    cout<<endl<<"Swaped number n1: "<<n1;
    cout<<endl<<"Swaped number n2: "<<n2;
    
    return 0;
}