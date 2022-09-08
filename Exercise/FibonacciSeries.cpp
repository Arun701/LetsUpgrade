// Sum of previous two number equal is next number

#include<iostream>
using namespace std;

int main()
{
    int FirstPreviousNumber = 0, SecondPreviousNumber = 1, Total, Number, count;

    cout<<endl<<"Enter how many number you want to print of fabonacci series ";
    cin>>Number;

    cout<<endl<<FirstPreviousNumber<<", "<<SecondPreviousNumber<<", ";

    for(count = 3; count <= Number; count++)
        {
            Total = FirstPreviousNumber + SecondPreviousNumber;
            cout<<Total<<", ";
            FirstPreviousNumber = SecondPreviousNumber;
            SecondPreviousNumber = Total;
        }
    return 0;
}