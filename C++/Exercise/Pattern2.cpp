#include<iostream>
using namespace std;

int main()
{
    int count, NumberOfLines, i;

    cout<<endl<<"Enter the number of lines to print: ";
    cin>>NumberOfLines;

    for(count = 1; count<=NumberOfLines; count++)
    {
        for (i = 1; i <= count; i++)
        {
            cout<<" "<<count;
        }
        cout<<endl;
        
    }
    return 0;
}