#include<iostream>
using namespace std;

void linearSearch(int *, int, int);

int main()
{
    int i, n, v;
    int *p;

    cout<<endl<<"Enter the Array size number: ";
    cin>>n;

    p = new int[n];

    for (i = 0; i < n; i++)
    {
        cout<<"Enter the array element: ";
        cin>>*(p+i);
    }

    cout<<endl<<"Enter the search value: ";
    cin>>v;
   
    linearSearch(p, v, n);

    return 0;
}

void linearSearch(int *p, int v, int n)
{
    
    int f = 0, i;

    for(i = 0; i < n; i++)
    {
        if(*(p+i) == v)
        {
            f= 1;
            break;
        }
    }

    if(f = 1)
        cout<<endl<<v<<" found at index: "<<i;

    else
        cout<<endl<<v<<" is not found in the array"; 
}