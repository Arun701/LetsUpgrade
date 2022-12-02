/*
write a code for following create struct student for 15 student with its name,rno, marks of 3 subject,tot per and class with following condition per>=70 dist, per between 60-70 first than 60-50 second ,than 50-40 pass ,below 40 fail
*/

#include<iostream>
using namespace std;

struct student
{
    char name[25];
    int rno;
    int marks[3];
};

typedef struct student stud;

int main()
{
    stud s[15];
    int i, j;
    double sumOfNumber, percentage;

    for (i = 0; i < 15; i++)
    {
        fflush(stdin);
        cout<<endl<<"Enter the student name: ";
        gets(s[i].name);

        cout<<endl<<"Enter the student roll number: ";
        cin>>s[i].rno;
        fflush(stdin);

        for (j = 0; j < 3; j++)
        {
            cout<<endl<<"Enter subject marks: ";
            cin>>s[i].marks[j];
        }

    }

    for (i = 0; i < 15; i++)
    {
        cout<<endl<<"Name: "<<s[i].name;
        cout<<endl<<"Roll no.: "<<s[i].rno;

        sumOfNumber = 0;

        for (j = 0; j < 3; j++)
        {
            sumOfNumber += s[i].marks[j];
        }

        percentage = (sumOfNumber * 100) / 300;

        cout<<endl<<"Percentage: "<<percentage;

        if (percentage >= 70) 
        {
            cout<<endl<<"Distinction: dist";
        }
        else if (percentage >= 60 && percentage < 70)
        {
            cout<<endl<<"Distinction: first";
        }
        else if (percentage >= 50 && percentage < 60)
        {
            cout<<endl<<"Distinction: second";
        }
        else if (percentage >= 40 && percentage < 50)
        {
            cout<<endl<<"Distinction: pass";
        }
        else
        {
            cout<<endl<<"Distinction: failed";
        }
        
    }

}