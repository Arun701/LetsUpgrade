#include<iostream>
using namespace std;
int n;
void mergesort(int[],int,int);
void merge(int[],int,int,int);
int main()
{
    int *p ,i;

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
    
    mergesort(p,0,n-1);

    cout<<endl<<"AFTER SORTING "<<endl;
    for(i=0;i<n;i++)
        cout<<endl<<"a[ "<<i+1<<" ] ="<<p[i];

    return 0;

}

void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;

        mergesort(a,l,m);
        mergesort(a,m+1,r);

        merge(a,l,m,r);
    }

    return ;
}

void merge(int a[],int l,int m,int r)
{
    int i,j,k;

    i=l; //0
    j=m+1; //1+1 =2
    k=l;//0
    int *t;
    t = new int[n]; 
    while(i<=m && j<=r)
    {
         if(a[i]<=a[j])
            t[k++]=a[i++];
         else
            t[k++]=a[j++];
    }
    while (i<=m)
        t[k++]=a[i++];

    while (j<=r)
        t[k++]=a[j++];

    for(int p=l;p<=r;p++)//cpy
        a[p]=t[p];    

}