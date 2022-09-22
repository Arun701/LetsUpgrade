#include<iostream>
using namespace std;

void maxMin(int *, int);

int main()
{
    int i, size;
    int *p;

    cout<<endl<<"Enter the size of array: ";
    cin>>size;

    p = new int[size];

    for (i = 0; i < size; i++)
    {
        cout<<endl<<"Enter the number: ";
        cin>>*(p + i);
    }

    maxMin(p, size);
    return 0;
}

void maxMin(int *ptr, int s)
{   
    int n, j;

    n = *(ptr+0);

    for (j = 1; j < s; j++)
    {
        if (n > *(ptr + j));
        else
        {
            n = *(ptr + j);
        }  
    }
    cout<<endl<<"Max number: "<<n;

    n = *(ptr+0);

    for (j = 1; j < s; j++)
    {
        if (n < *(ptr + j));
        else
        {
            n = *(ptr + j);
        }  
    }

    cout<<endl<<"Min number: "<<n;
}