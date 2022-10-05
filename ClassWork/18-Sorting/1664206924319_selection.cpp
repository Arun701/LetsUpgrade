#include<iostream>
using namespace std;
void selection(int *, int );
int main()
{
   int *p ,n,i;

   cout<<endl<<"Enter no of elemnets in array:";
   cin>>n;

   p = new int[n];

   for(i=0;i<n;i++)
   {
        cout<<endl<<"Enter values in array:";
        cin>>(p+i);
   }

    selection(p,n);

    for(i=0;i<n;i++)
    {
        cout<<endl<<"p [ "<<i<<" ] ="<<*(p+i);
    }

    return 0;
}
void selection (int *a,int n)
{
        int i,j,t;

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
               /* if(*(a+i)<*(a+j))
                {
                    t=*(a+i);
                    *(a+i)=*(a+j);
                    *(a+j)=t;
                }*/
                if( a[i] > a[j] )
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
}