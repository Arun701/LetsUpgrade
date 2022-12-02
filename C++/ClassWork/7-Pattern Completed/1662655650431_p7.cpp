#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j,n,sp=0;
    
    cout<<endl<<"Enter no of lines:";
    cin>>n;    

    for(i=n;i>=1;i--)
    {
       for(j=1;j<=sp;j++)
            cout<<" ";

         for(j=1;j<=i;j++)
            cout<<setw(3)<<j;           
     
         sp=sp+3;
         cout<<endl;
    }
    return 0;
}