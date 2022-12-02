#include<iostream>
using namespace std;

void Rec(int, int, int*, int*);

int main()
{
    int l, b, A, P;

    cout<<endl<<"Enter the length of Rectangle: ";
    cin>>l;

    cout<<endl<<"Enter the breadth of Rectangle: ";
    cin>>b;

    Rec(l, b, &A, &P);

    cout<<endl<<"Area of Rec: "<<A;
    cout<<endl<<"Perimeter of the Rec: "<<P;

    return 0;
}

void Rec(int len, int bred, int *Ar, int *Per)
{
    *Ar = len * bred;

    *Per = 2 * (len + bred);
}