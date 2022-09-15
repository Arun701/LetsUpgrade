#include<iostream>
using namespace std;
int main()
{
    int s,i;

    cout<<endl<<"Enter size of array :";
    cin>>s;

    int a[s];

    for(i=0;i<s;i++)
    {
        cout<<endl<<"Enter elements in array :";
        cin>>a[i];
    }

    for(i=0;i<s;i++)
    {
        cout<<endl<<"a ["<<i<<"] = "<<a[i];
    }
    return 0;
}