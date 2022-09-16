#include<iostream>
using namespace std;

//Defining user define structure...

struct employee
{
    char empnm[25];
    int empno;
    double da;
    double hra;
    double pf;
    double loan;
    int med = 1000;
    
};
typedef struct employee emp;

void calculateIncome(int, emp);

//Defining main function...

int main()
{
    int basicSalary;
    emp employ;

    cout<<endl<<"Enter basic salary of employee: ";
    cin>>basicSalary;

    cout<<endl<<"Enter Name of employee: ";
    cin>>employ.empnm;

    cout<<endl<<"Enter ID of employee: ";
    cin>>employ.empno;

    calculateIncome(basicSalary, employ);

    return 0;
}

void calculateIncome(int a, emp E)
{
    double netSalary, grossIncome;
    double da, hra, pf, loan, medical;

    da = E.da = (a * 20)/100;
    hra = E.hra = (a * 20)/100;
    pf = E.pf = (a * 25)/100;
    loan = E.loan = (a * 8)/100;
    medical = E.med;
    netSalary = a + da + hra + medical + pf + loan; 
    grossIncome = netSalary * 12;

    cout<<endl<<"ID of employee: "<<E.empno;
    cout<<endl<<"Name of employee: "<<E.empnm;
    cout<<endl<<"Gross income: "<<grossIncome;
    cout<<endl<<"DA of employee: "<<da;
    cout<<endl<<"HRA of employee: "<<hra;
    cout<<endl<<"PF of employee: "<<pf;
    cout<<endl<<"Medical of employee: "<<medical;
    cout<<endl<<"Loan of employee: "<<loan;
    cout<<endl<<"Net salary of month: "<<netSalary;

}
