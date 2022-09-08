#include<iostream>
using namespace std;

int main()
{
    int n1, n2, add, sub, mul;  //Define variable
    float div;

    cout<<endl<<"Enter first number: ";
    cin>>n1;
    cout<<endl<<"Enter second number: ";
    cin>>n2;

    add = n1+n2;    //Addition of the number
    sub = n1-n2;    //Substration of the number
    mul = n1*n2;    //Multiplication of the number
    div = (float)n1/n2;     //Division of the number

    cout<<endl<<"Addition of the number: "<<add;
    cout<<endl<<"Substration of the number: "<<sub;
    cout<<endl<<"Multiplication of the number: "<<mul;
    cout<<endl<<"Division of the number: "<<div;

    return 0;

}