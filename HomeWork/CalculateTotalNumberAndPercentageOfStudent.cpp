#include<iostream>
using namespace std;

int main()
{
    double hindi, english, science, math, socialScience, art, totalMarks, percentage;

    cout<<endl<<"Enter the mark obtained in hindi: ";
    cin>>hindi;

    cout<<endl<<"Enter the mark obtained in english: ";
    cin>>english;

    cout<<endl<<"Enter the mark obtained in science: ";
    cin>>science;

    cout<<endl<<"Enter the mark obtained in math: ";
    cin>>math;

    cout<<endl<<"Enter the mark obtained in socialScience: ";
    cin>>socialScience;

    cout<<endl<<"Enter the mark obtained in art: ";
    cin>>art;

    totalMarks = hindi + english + science + math + socialScience + art;

    percentage = (totalMarks * 100) / 600;

    cout<<endl<<"Total marks obtained: "<<totalMarks;
    cout<<endl<<"Percentage obtained: "<<percentage;


    return 0;
}