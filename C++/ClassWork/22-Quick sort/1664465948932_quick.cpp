#include<iostream>
using namespace std;
void quicksort(int[],int,int);
int parti(int[],int,int);
int main()
{
    int *p,i,n;

    cout<<endl<<"Enter no of elements:";
    cin>>n;

    p = new int[n];

    for(i=0;i<n;i++)
    {
        cout<<endl<<"Enter elements :";
        cin>>p[i];
    }

    cout<<endl<<"BEFORE SORTING "<<endl;
    for(i=0;i<n;i++)
        cout<<endl<<"a[ "<<i+1<<" ] ="<<p[i];
    
    quicksort(p,0,n-1);

    cout<<endl<<"AFTER SORTING "<<endl;
    for(i=0;i<n;i++)
        cout<<endl<<"a[ "<<i+1<<" ] ="<<p[i];

    return 0;

}
void quicksort(int a[],int l,int h) 
{
    int pindex;
    
    if(l<h)
    {
        pindex=parti(a,l,h); 

        quicksort(a,l,pindex-1); //left 

        quicksort(a,pindex+1,h); //right
    }
    return;
}
int parti(int a[],int l,int h)
{
    int piv=a[h]; //right most elemet as pivot

    int i=l-1;
    int t;
    for(int j=l;j<h;j++)
    {
            if(a[j]<=piv)
            {
                i++;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    }
    i++;  // swaping the pivot to its position
    t=a[i]; //which is pivot is greater then element at i;   
    a[i]=a[h];
    a[h]=t;
  
  return i;
}
