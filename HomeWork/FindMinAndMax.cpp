# include<iostream>
using namespace std;

int main()
{
    int a[10] = {100, 1, 5, 500, 3, 6, 100, 10, 8, 600}, i, numberOfElement, max, min;
    numberOfElement = 10;
    max = a[0];
    min = a[0];
// find max value

    for (i = 0; i < numberOfElement-1; i++)
    {
        if (max > a[i+1]);
        else
            max  = a[i+1];   
    }
    cout<<endl<<"Max value: "<<max;
//find min value

    for (i = 0; i < numberOfElement-1; i++)
    {
        if (min < a[i + 1]);
        else
            min = a[i + 1];   
    }
    cout<<endl<<"Min value: "<<min;

    return 0;
}