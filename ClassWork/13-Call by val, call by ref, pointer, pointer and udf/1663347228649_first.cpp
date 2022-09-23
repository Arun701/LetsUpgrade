#include<iostream>
using namespace std;

void rect(int,int, int*,int*);

int main()
{
    int l,b,a,p;

    cout<<endl<<"Enter length of rect :";
    cin>>l;
    cout<<endl<<"Enter breath of rect :";
    cin>>b;

    rect(l,b,&a,&p);

    cout<<endl<<"AREA = "<<a;
    cout<<endl<<"PERIMETER = "<<p;

    return 0;    
}
void rect(int l,int b, int * ar,int *pr)
{
    *ar=l*b;
    *pr=2*(l+b);
}
