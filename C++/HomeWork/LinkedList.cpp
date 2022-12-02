#include<iostream>
using namespace std;

struct linkedList
{
    int data;
    struct linkedList *next;
};
typedef linkedList list;

list *first;

void create(list *);
void insert(list *);

int main()
{
    int ch;
    first = NULL;

    do
    {
        cout<<endl<<"Menu for linked list";
        cout<<endl<<"1. Create";
        cout<<endl<<"2. Insert";

        cout<<endl<<"Enter your choise:";
        cin>>ch;

    switch (ch)
    {
        case 1:
                create(first);
                break;
        case 2:
                insert(first);
                break;
    }   
    } while (ch >= 1 && ch <= 2);
}

void create(list *nn)
{
    if (nn == NULL)
    {
        first = new list;

        cout<<endl<<"Enter the data: ";
        cin>>first->data;
        first->next = NULL;
    }
    else
    {
        cout<<endl<<"Please insert...";
    }
}

void insert(list *nn)
{
    if (nn == NULL)
    {
        cout<<endl<<"Please create...";
    }
    else
    {
        while (nn->next != NULL)
        {
            nn = nn->next;
        }

        nn->next = new list;

        cout<<endl<<"Enter the data: ";
        cin>>nn->next->data;
        nn->next->next = NULL;
    }
}