#include<iostream>
using namespace std;

int main()
{
    int num, orig, n1, n2, n3, n4, n5, rev = 0;

    cout<<endl<<"Enter five digit number: ";
    cin>>num;

    orig = num;

    n1 = num % 10;
    num = num / 10;

    n2 = num % 10;
    num = num / 10;

    n3 = num % 10;
    num = num / 10;

    n4 = num % 10;
    num = num / 10;

    n5 = num % 10;
    num = num / 10;

    rev = n1*10000+ n2*1000 +n3*100 +n4*10 +n5;

    if (rev == orig)
    {
        cout<<endl<<"Original = "<<orig<<" and reverse = "<<rev<<" number are same";
    }
    else
    {
        cout<<endl<<"Original = "<<orig<<" and reverse = "<<rev<<" number are not same";
    }
    
    

    return 0;
}