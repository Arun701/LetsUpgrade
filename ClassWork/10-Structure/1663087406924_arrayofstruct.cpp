#include<iostream>
using namespace std;

struct book
{
    int bno;
    char bnm[25];
    char anm[25];
    double pr;
};
typedef struct book book;

int main()
{
    book b[5];
    int i;
    for(i=0;i<5;i++)
    {
            cout<<endl<<"Enter the book no :";
            cin>>b[i].bno;
            fflush(stdin);
            cout<<endl<<"Enter the book name :";
            gets(b[i].bnm);
            cout<<endl<<"Enter the Auther name:";
            gets(b[i].anm);
            cout<<endl<<"Enter book price:";
            cin>>b[i].pr;
    }
    cout<<endl<<endl<<"DETAIL OF BOOK "<<endl;
    
    cout<<endl<<"id        name        authur      price";
    for(i=0;i<5;i++)
         cout<<endl<<b[i].bno<<"    "<<b[i].bnm<<"    "<<b[i].anm<<"     "<<b[i].pr;

    return 0;
}
