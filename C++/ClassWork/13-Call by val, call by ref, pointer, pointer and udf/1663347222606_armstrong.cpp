#include<iostream>
using namespace std;
int main()
{
    int n,c,n1,rem,p,i,s=0;

    cout<<endl<<"Enter a no:";
    cin>>n;
    n1=n;
    c=0;
    while(n>0)
    {
        rem=n%10;
        c++;
        n=n/10;
    }
    n=n1;
    while(n>0)
    {
        rem=n%10;

        p=1;
        for(i=1;i<=c;i++)
            p=p*rem;

        s+=p;
        n=n/10;
    }

    if(s==n1)
        cout<<endl<<n1<<" is armstrong";
    else
        cout<<endl<<n1<<" is not armstrong";
    
return 0;

}