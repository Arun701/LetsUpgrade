#include<iostream>
using namespace std;
void fact(int);

int main()
{
    int n;

    cout<<endl<<"Enter the no:";
    cin>>n;
    
    fact(n);
    
    return 0;
}

void fact(int n)
{
    int i,a=1;

    for(i=1;i<=n;i++)
        a=a*i;

    cout<<endl<<"FACTORIAL OF "<<n<<" is "<<a;
}
