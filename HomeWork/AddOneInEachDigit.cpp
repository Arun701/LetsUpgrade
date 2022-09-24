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

    n2 = number % 10;
    number = number / 10;

    n3 = number % 10;
    number = number / 10;

    n4 = number % 10;
    number = number / 10;

    n5 = number % 10;
    number = number / 10;

    n1 = n1 + 1;
    n2 = n2 + 1;
    n3 = n3 + 1;
    n4 = n4 + 1;
    n5 = n5 + 1;

    cout<<endl<<n<<" new number with one addition: "<<n5<<n4<<n3<<n2<<n1;

    return 0;
}