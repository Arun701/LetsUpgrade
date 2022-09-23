#include<iostream>
using namespace std;
void swapv(int,int);
int main()
{
    int a,b;

    cout<<endl<<"Enter value in a:";
    cin>>a;
    cout<<endl<<"Enter the value in b:";
    cin>>b;

    swapv(a,b);

    cout<<endl<<"AFTER SWAPPING "<<endl;

    cout<<endl<<"A  :  "<<a;
    cout<<endl<<"B  :  "<<b;

    return 0;
}
void swapv(int x,int y)
{
    int t;
    
    t=x;
    x=y;
    y=t;
    cout<<endl<<"IN SWAPPING "<<endl;

    cout<<endl<<"x  :  "<<x;
    cout<<endl<<"y  :  "<<y;

}
