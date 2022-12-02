#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<endl<<"Enter value in a:";
    cin>>a;
    cout<<endl<<"Enter value in b:";
    cin>>b;
    cout<<endl<<"Enter value in c:";
    cin>>c;

    if((a>b)&&(a>c))
        cout<<endl<<"A IS GREATEST";
    else if((b>a)&&(b>c))
        cout<<endl<<"B IS GREATEST";
    else
        cout<<endl<<"C IS GREATEST";        
    
    return 0;
}