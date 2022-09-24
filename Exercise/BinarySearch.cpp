#include<iostream>
using namespace std;

void binarySearch(int *, int, int);

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

    binarySearch(p, n, v);

    return 0;
}

void binarySearch(int *Arr, int s, int v)
{
    int l = 0, h = s, f = 0, m;

    while (l <= h)
    {
        m = (l+h)/2;

        if (v < *(Arr + m))
        {
            h = m - 1;
        }
        
        else if (v > *(Arr + m))
        {
            l = m + 1;
        }

        else
        {
            f = 1;
            break;
        }
    }
    
    if (f == 0)
    {
        cout<<endl<<v<<" not found";
    }

    if (f == 1)
    {
        cout<<endl<<v<<" found";
    }
    

}