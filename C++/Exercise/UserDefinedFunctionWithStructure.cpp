#include<iostream>
using namespace std;

//Creating structure...
struct book
{
    int bookNo;
    char bookName[50];
    double bookPrice;
};
typedef struct book book;

void getBooks();

// Defining main fuction...
int main()
{
    getBooks();
    return 0;

}

//Defining user define fuction...
void getBooks()
{
    book b[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        b[i].bookNo = i+1;
        
        fflush(stdin);
        cout<<endl<<"Enter book name: ";
        gets(b[i].bookName);

        cout<<endl<<"Enter book Price: ";
        cin>>b[i].bookPrice;
    }

    for (i = 0; i < 5; i++)
    {
        cout<<endl<<"Book serial Number: "<<b[i].bookNo;
        cout<<endl<<"Book Name: "<<b[i].bookName;
        cout<<endl<<"Book price: "<<b[i].bookPrice;
    }
}

