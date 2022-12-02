#include<iostream>
using namespace std;

//Creating user define datatype...
struct employee
{
    int empID;
    char empName[30];
    double empSalary;
};
typedef struct employee emp;

void employ();

//Defining main function...
int main()
{
    employ();
    return 0;
}

//Creating user defined function...

void employ()
{
    emp e[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        e[i].empID = i+1;

        fflush(stdin);
        cout<<endl<<"Enter employee name: ";
        gets(e[i].empName);

        cout<<endl<<"Enter employee salary: ";
        cin>>e[i].empSalary;
    }

    for (i = 0; i < 5; i++)
    {
        cout<<endl<<"Employee id: "<<e[i].empID;
        cout<<endl<<"Employee name: "<<e[i].empName;
        cout<<endl<<"Employee salary: "<<e[i].empSalary;
    }

}

