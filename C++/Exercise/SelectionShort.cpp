#include<iostream>
using namespace std;

int main()
{
    int i, j, n, temp;
    int *p;

    cout<<endl<<"Enter the size of the Array: ";
    cin>>n;

    p = new int[n];

    for (i = 0; i < n; i++)
    {
        cout<<endl<<"Enter the array element: ";
        cin>>*(p + i);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(p+i) > *(p+j))
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }  
        }  
    }

    for (i = 0; i < n; i++)
    {
        cout<<endl<<"p ["<<i<<"] = "<<*(p + i);
    }
    
    return 0;
}