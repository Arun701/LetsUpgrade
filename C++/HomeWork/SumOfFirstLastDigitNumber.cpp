#include<iostream>
using namespace std;

int main()
{
    int number, n, n1, n2, n3, n4, sum;

    cout<<endl<<"Enter four digit number: ";
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

    sum = n1 + n4;

    cout<<endl<<"Sum of first and last digit of four digit: "<<n<<" = "<<sum;

    return 0;
}