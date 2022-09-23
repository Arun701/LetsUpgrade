#include<iostream>
using namespace std;
int fact();
int main()
{
    int f;

    f=fact();

    cout<<endl<<"FACTORIAL = "<<f;
    
    return 0;
}
int fact()
{
    int i,a=1,n;

    cout<<endl<<"Enter  a no:";
    cin>>n;

    for(i=1;i<=n;i++)
        a=a*i;

    return(a);
    //cout<<endl<<"FACTORIAL OF "<<n<<" is "<<a;
}
