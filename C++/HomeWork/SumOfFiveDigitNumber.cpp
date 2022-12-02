#include<iostream>
using namespace std;

int main()
{
    int number, n, n1, n2, n3, n4, n5, sum;

    cout<<endl<<"Enter five digit number: ";
    cin>>number;

    n = number;
    
    n1 = number % 10;
    number = number / 10;

    n2 = number % 10;
    number = number / 10;

    n3 = number % 10;
    number = number / 10;

    n4 = number % 10;
    number = number / 10;

    n5 = number % 10;
    number = number / 10;

    sum = n1 + n2 + n3 + n4 + n5;
    
    cout<<"Sum of five digit: "<<n<<" = "<<sum;
    
    return 0;
}