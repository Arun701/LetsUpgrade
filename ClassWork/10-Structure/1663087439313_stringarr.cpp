#include<iostream>
using namespace std;
int main()
{
    char nm[5][20];

    int i;

    for(i=0;i<5;i++)
    {
            cout<<endl<<"Enter your name:";
            cin>>nm[i];
    }

    for(i=0;i<5;i++)
        cout<<endl<<nm[i];

    return 0;

}