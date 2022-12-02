#include<iostream>
using namespace std;

int main()
{
    double cen, fah;

    cout<<endl<<"Enter tempreture in Fahrenheit degrees: ";
    cin>>fah;

    cen = (fah - 32) * 5 / 9;

    cout<<endl<<fah<<" Fahrenheit degrees to centigrade: "<<cen;

    return 0;
}