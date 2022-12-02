/*
If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that 
the maximum marks that can be obtained by a student in each 
subject is 100. 
*/

#include<iostream>
using namespace std;

int main()

{
    float Hindi, English, Math, Physics, Chemstry, obtainedMarks, obtrainedPercentage;

    cout<<endl<<"Enter marks obtained in Hindi: ";
    cin>>Hindi;
    cout<<endl<<"Enter marks obtained in English: ";
    cin>>English;
    cout<<endl<<"Enter marks obtained in Math: ";
    cin>>Math;
    cout<<endl<<"Enter marks obtained in Physics: ";
    cin>>Physics;
    cout<<endl<<"Enter marks obtained in Chemstry: ";
    cin>>Chemstry;

    obtainedMarks = Hindi + English + Math + Physics + Chemstry;
    obtrainedPercentage = (obtainedMarks * 100) / 500;

    cout<<endl<<"Obtained marks: "<<obtainedMarks;
    cout<<endl<<"Obtained percentage: "<<obtrainedPercentage<<"%";

    return 0;
}