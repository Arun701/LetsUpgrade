#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j,n;

    cout<<endl<<"Enter no of lines:";
    cin>>n;    

    for(i=1;i<=n;i++)
    {
         for(j=i;j<=n;j++)
            cout<<"  "<<i;   
     
         cout<<endl;
    }
    return 0;
}