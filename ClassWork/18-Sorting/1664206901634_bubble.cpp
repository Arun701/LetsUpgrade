#include<iostream>
using namespace std;
void bubble(int *, int );
int main()
{
   int *p ,n,i;

   cout<<endl<<"Enter no of elemnets in array:";
   cin>>n;

   p = new int[n];

   for(i=0;i<n;i++)
   {
        cout<<endl<<"Enter values in array:";
        cin>>*(p+i); 
   }

    bubble(p,n);

    for(i=0;i<n;i++)
    {
        cout<<endl<<"p [ "<<i<<" ] ="<<*(p+i);
    }

    return 0;
}

void bubble(int *a,int n)
{
    int i,j,t;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
