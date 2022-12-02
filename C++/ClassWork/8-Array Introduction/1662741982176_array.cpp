#include<iostream>
using namespace std;
int main()
{
    int a[5],i;

    for(i=0;i<5;i++)
    {
        cout<<endl<<"Enter elements in array :";
        cin>>a[i];
    }

    for(i=0;i<5;i++)
    {
        cout<<endl<<"a ["<<i<<"] = "<<a[i];
    }
    return 0;
}