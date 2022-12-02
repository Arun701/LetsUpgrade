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
    book b;

    cout<<endl<<"Enter the book no :";
    cin>>b.bno;
    fflush(stdin);
    cout<<endl<<"Enter the book name :";
    gets(b.bnm);
    cout<<endl<<"Enter the Auther name:";
    gets(b.anm);
    cout<<endl<<"Enter book price:";
    cin>>b.pr;


    cout<<endl<<endl<<"DETAIL OF BOOK "<<endl;

    cout<<endl<<"id            name              authur       price";
    cout<<endl<<b.bno<<"     "<<b.bnm<<"    "<<b.anm<<"     "<<b.pr;

    return 0;
}
