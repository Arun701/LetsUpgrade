#include<iostream>
using namespace std;
int prime(int,int);
int main()
{
    int n,c;

    cout<<endl<<"Enter no:";
    cin>>n;

    c=prime(n,n);

    if(c==2)
        cout<<endl<<"NO IS PRIME ";
    else 
        cout<<endl<<"NO IS NOT PRIME";

    return 0;

}
int prime(int n,int i)  
{
    static int c=0;

    if(i==1)
        return(++c);
    else
    {
        if(n%i==0)
            c++;
        
        c=prime(n,i-1);    
    }
        return c;
}


