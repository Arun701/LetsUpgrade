#include<iostream>
using namespace std;

int main()
{
    int i, v, n, l, h, m, f;
    int *p;

    cout<<endl<<"Enter the size of Array: ";
    cin>>n;

    p = new int[n];

    for(i = 0; i < n; i++)
    {
        cout<<endl<<"Enter the array element: ";
        cin>>*(p + i);
    }

    cout<<endl<<"Enter the value to find in Array: ";
    cin>>v;

    l = 0, h = n, f = 0;

    while(l < h)
    {
        m = (l + h) / 2;
        if (v == *(p+m))
        {
            f = 1;
            break;
        }
        if (v < *(p+m))
        {
            h = m - 1;
        }
        if (v > *(p+m))
        {
            l = m + 1;
        }  
    }

    if (f == 1)
    {
        cout<<endl<<v<<" found in Array";
    }

    if (f == 0)
    {
        cout<<endl<<v<<" not found in Array";
    }
    
    return 0;
}