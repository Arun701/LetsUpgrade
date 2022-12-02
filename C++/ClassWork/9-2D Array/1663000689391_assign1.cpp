#include<iostream>
using namespace std;
int main()
{
    int a[5],r[5],i,j;
    j=4;
    for(i=0;i<5;i++)
    {
        cout<<endl<<"Enter elements: ";
        cin>>a[i];

        r[j--]=a[i];
    }

    for(i=0;i<5;i++)
        cout<<endl<<a[i]<<"     "<<r[i];
}