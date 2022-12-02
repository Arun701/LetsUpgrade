#include<iostream>
using namespace std;

int main()

{
    int number, reverseNumber, n1, n2, n3, n4, n5;

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

    reverseNumber = n1<<n2<<n3<<n4<<n5;

    cout<<endl<<"Reverse number: "<<reverseNumber;

    if (reverseNumber == number)
    {
        cout<<endl<<"Reverse five digit number is same as original number.";
    }
    else
        cout<<endl<<"Reverse five digit number is not same as original number.";

    
    return 0;
}