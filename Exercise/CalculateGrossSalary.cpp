#include<iostream>
using namespace std;

/*
Ramesh’s basic salary is input through the keyboard. His 
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary.
*/


int main()
{
    float basicSalary, dearnessAllowance, rentAllowance, grossSalary;

    cout<<endl<<"Enter the gross salary: ";
    cin>>basicSalary;

    dearnessAllowance = (basicSalary*40)/100;
    rentAllowance = (basicSalary*20)/100;
    grossSalary = basicSalary + dearnessAllowance + rentAllowance;

    cout<<"Gross salary: "<<grossSalary;

    return 0;
}