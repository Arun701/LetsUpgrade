#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j,a[10][10],n,sp=30;

    cout<<endl<<"Enter no of lines :";
    cin>>n;

    for(i=0;i<n;i++)
    {
        //for(j=1;j<=sp;j++)
          //  cout<<" ";

        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j-1]+a[i-1][j];

            cout<<setw(4)<<a[i][j];
        }
        cout<<endl;
       // sp=sp-2;
    }

    return 0;
}