#include<iostream>
using namespace std;

int main()
{
    int n1,n2,add,sub,mul;
    float div;

    cout<<endl<<"Enter a no:";
    cin>>n1;
    cout<<endl<<"Enter another no :";
    cin>>n2;

    add=n1+n2;
    sub=n1-n2;
    mul=n1*n2;
    div=n1/(float)n2;//typecaste

    cout<<endl<<"ADDITION ="<<add;
    cout<<endl<<"SUBSTRACTION ="<<sub;
    cout<<endl<<"MULTIPLICATION ="<<mul;
    cout<<endl<<"DIVISION = "<<div;

    return 0;
}