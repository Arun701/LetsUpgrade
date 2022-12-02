#include<iostream>
using namespace std;

int main()
{
    int number, n, n1, n2, n3, n4, n5;

    cout<<endl<<"Enter five digit number: ";
    cin>>number;

    n = number;
    
    n1 = number % 10;
    number = number / 10;
    cout<<endl<<"rem: "<<n1;

    n2 = number % 10;
    number = number / 10;
    cout<<endl<<"rem: "<<n2;

    n3 = number % 10;
    number = number / 10;
    cout<<endl<<"rem: "<<n3;

    n4 = number % 10;
    number = number / 10;
    cout<<endl<<"rem: "<<n4;

    n5 = number % 10;
    number = number / 10;
    cout<<endl<<"rem: "<<n5;
    
    cout<<endl<<"Reverse of five digit: "<<n<<" = "<<n1 << n2 << n3 << n4 << n5;
    
    return 0;
}