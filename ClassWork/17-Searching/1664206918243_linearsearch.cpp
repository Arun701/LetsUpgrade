#include<iostream>
using namespace std;
void linear(int *,int,int);
int main()
{
    int * p,n,i,v;

    cout<<endl<<"Enter no of elements in array:";
    cin>>n;

    p= new int [n];

    for(i=0;i<n;i++)
    {
        cout<<endl<<"Enter elements in array :";
        cin>>*(p+i);
    }

    cout<<endl<<"Enter value to be searched:";
    cin>>v;

    linear(p,n,v);

    return 0;
}
void linear(int * a,int n,int v)
{
    int i,f=0;

    for(i=0;i<n;i++)
    {
        if(*(a+i)==v)
        {
            f=1;
            cout<<endl<<v<<" FOUND AT "<<i+1;
            //break;
        }       
    }
    if(f==0)
        cout<<endl<<"SORRY VALUE NOT FOUND ...";
}