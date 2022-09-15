#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j,sp=40,n;

    cout<<endl<<"Enter the no of lines:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sp;j++)
            cout<<" ";

        for(j=1;j<=i;j++)
            cout<<setw(8)<<j;

        sp=sp-4;

        cout<<endl;
    }
    return 0;
}