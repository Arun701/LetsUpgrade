#include<iostream>
using namespace std;

int main()
{
    int day;

    cout<<endl<<"Enter the day's no :";
    cin>>day;

    switch(day)
    {
        case 1:
                cout<<endl<<"MONDAY";
                break;
        case 2:
                cout<<endl<<"TUESDAY";
                break;
        case 3:
                cout<<endl<<"WEDNESDAY";
                break;
        case 4:
                cout<<endl<<"THURSDAY";
                break;
        case 5:
                cout<<endl<<"FRIDAY";
                break;
        case 6:
                cout<<endl<<"SATURDAY";
                break;
        case 7:
                cout<<endl<<"SUNDAY";
                break;
        default :
                cout<<endl<<"SORRY ONLY 8 DAYS WEEK";
    }
   // return 0;
}