#include<iostream>
using namespace std;
void insertionsort(int *,int);
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

    insertionsort(p,n);

    for(i=0;i<n;i++)
    {
        cout<<endl<<"p [ "<<i<<" ] ="<<*(p+i);
    }

    return 0;
}
void insertionsort(int *a,int s)
{
    int i,j,k,t;

    for(i=1;i<s;i++)
    {
         for(j=0;j<i;j++)
         {
            if(*(a+j)>*(a+i))
            {
                t=*(a+j);
                *(a+j) = *(a+i);

                for(k=i;k>j;k--)
                    *(a+k)=*(a+(k-1));
                
                *(a+(k+1))=t;
            }
         }
    }
}