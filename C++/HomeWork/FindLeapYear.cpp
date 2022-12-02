#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<endl<<"Enter the year: ";
    cin>>year;

    if (year % 4 == 0)
    {
        cout<<endl<<year<<" is leap year";
    }
    else
    {
        cout<<endl<<year<<" is not leap year";
    }
    
    return 0;
}