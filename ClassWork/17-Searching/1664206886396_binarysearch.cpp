#include<iostream>
using namespace std;
void binary(int *,int,int);
int main()
{
    int * p,n,i,v;

    cout<<endl<<"Enter no of elements in array:";
    cin>>n;

    p= new int [n];

    for(i=0;i<n;i++)
    {
        cout<<endl<<"Enter elements in sorted form in array :";
        cin>>*(p+i);
    }

    cout<<endl<<"Enter value to be searched:";
    cin>>v;

    for(i=0;i<n;i++)
        cout<<endl<<"p [ "<<i+1<<" ] = "<<*(p+i);

    binary(p,n,v);

    return 0;
}
void binary(int * a,int n,int v)
{
    int l=0,h=n,m,f=0;

    while(l<=h)
    {
        m=(l+h)/2;

        if(v < *(a+m))
            h=m-1;
        else if(v > *(a+m))
            l=m+1;
        else 
        {
            f=1;
            cout<<endl<<v<<" FOUND AT "<<m+1;
            break;
        }

    }
    if(f==0)
        cout<<endl<<"SORRY VALUE NOT FOUND ...";
}