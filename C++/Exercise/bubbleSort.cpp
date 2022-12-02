#include<iostream>
using namespace std;

void bubbleSort(int *, int);

int main()
{
    int *p, s, i;

    cout<<endl<<"Enter the size of the Array: ";
    cin>>s;

    p = new int[s];

    for (i = 0; i < s; i++)
    {
        cout<<endl<<"Enter the element in Array: ";
        cin>>*(p + i);
    }
    
    bubbleSort(p, s);

    for (i = 0; i < s; i++)
    {
        cout<<endl<<"p["<<i<<"] = "<<*(p + i);
    }
    

    return 0;
}

void bubbleSort(int *a, int n)
{
    int i, j, t;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i -1; j++)
        {
            if (*(a + j)> *(a + j + 1))
            {
                t = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = t;
            }
            
        }
        
    }
    
}