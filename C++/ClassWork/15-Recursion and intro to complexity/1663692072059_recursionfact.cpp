#include<iostream>
using namespace std;

int fact(int);

int main()
{
    int n,ans;

    cout<<endl<<"Enter a no :";
    cin>>n;

    ans=fact(n);

    cout<<endl<<"Factorial of "<<n<<" is "<<ans;

    return 0;
}

int fact(int n)
{
    static int f;

    if(n==1)
        return 1;
    else    
        f=n*fact(n-1);
    
    return f;
}
