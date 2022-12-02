#include<iostream>
using namespace std;

int main()
{
    int count, NumberOfLines, i;

    cout<<endl<<"Enter the number of lines to print: ";
    cin>>NumberOfLines;

    for(count = 1; count<=NumberOfLines; count++)
    {
        for (i = count; i >= 1; i--)
        {
            cout<<" "<<i;
        }
        cout<<endl;
        
    }
    return 0;
}