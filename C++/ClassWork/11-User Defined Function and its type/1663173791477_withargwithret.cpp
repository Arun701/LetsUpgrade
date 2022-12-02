#include<iostream>
using namespace std;
int add(int,int,int);
int main()
{
    int a,b,c,ans;
    a=10;
    b=20;
    c=30;

    ans=add(a,b,c);
    cout<<endl<<"SUM ="<<ans;
    return 0;
}
int add(int a,int b,int c)
{
    return (a+b+c);
}