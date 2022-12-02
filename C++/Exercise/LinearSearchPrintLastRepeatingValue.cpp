#include<iostream>
using namespace std;

void linearSearch(int *, int, int);

int main()
{
    int *p, n, i, v;

    cout<<endl<<"Enter the size of the array: ";
    cin>>n;
    p = new int[n];

    for (i = 0; i < n; i++)
    {
        cout<<endl<<"Enter the element of array: ";
        cin>>*(p+i);
    }
    
    cout<<endl<<"Enter the value for search: ";
    cin>>v;

    linearSearch(p, n, v);

    return 0;
}

void linearSearch(int *Arr, int s, int v)
{
    int i, f = 0, ind;

    for ( i = 0; i < s; i++)
    {
        if (v == *(Arr + i))
        {
            f = 1;
            ind = i+1;
        }
        
    }

    if (f == 0)
    {
        cout<<endl<<v<<" does not exist in the Array.";
    }

    if (f == 1)
    {
        cout<<endl<<v<<" found at position: "<<ind;
    }
}