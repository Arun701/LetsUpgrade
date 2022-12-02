#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<endl<<"Enter a no :";
    cin>>n;

    if(n%2==0)
    {
        cout<<endl<<n<<" IS EVEN ";
    }
    else
    {
        cout<<endl<<n<<" IS ODD";
    }
    return 0;
}