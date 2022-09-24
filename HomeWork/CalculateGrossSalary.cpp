#include<iostream>
using namespace std;

int main()
{
    int basicSalary;
    float dearAllowance, houseRent, grossSalary;

    cout<<endl<<"Enter the basic salary of employee: ";
    cin>>basicSalary;

    dearAllowance = (basicSalary * 40)/ 100;
    houseRent = (basicSalary * 20)/ 100;

    grossSalary = basicSalary + dearAllowance + houseRent;

    cout<<endl<<"Gross salary of the employee: "<<grossSalary;

    return 0;
}