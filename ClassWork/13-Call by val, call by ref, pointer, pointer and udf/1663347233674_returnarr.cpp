#include<iostream>
using namespace std;
int * getdata();
int s =10;
int main()
{
    int i,*x;

    x = getdata();

    for(i=0;i<s;i++)
        cout<<endl<<x[i];

    return 0;      
}
int * getdata()
{
    static int a[10],j;

    for(j=0;j<s;j++)
    {
        cout<<endl<<"Enter values in array :";
        cin>>a[j];
    }
    return a;
    
}