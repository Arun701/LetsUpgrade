#include<iostream>
using namespace std;
void getdata(int[]);
int s =10;
int main()
{
    int a[10],i;

    getdata(a);

    for(i=0;i<s;i++)
        cout<<endl<<a[i];

    return 0;      
}
void getdata(int a[])
{
    int j;

    for(j=0;j<s;j++)
    {
        cout<<endl<<"Enter values in array :";
        cin>>a[j];
    }
    
}