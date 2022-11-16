#include<iostream>
using namespace std;

struct linkedList
{
    int data;
    struct linkedList *next;
};
typedef struct linkedList list;

list *first;

void create(list *);
void insert(list *);
void display(list *);
void del(list *);

int main()
{
    int ch;
    first = NULL;

    do
    {
        cout<<endl<<"Menu for linked list"<<endl;
        cout<<endl<<"1. Create";
        cout<<endl<<"2. Insert";
        cout<<endl<<"3. Display";
        cout<<endl<<"4. Delete";

        cout<<endl<<"Enter your choise: ";
        cin>>ch;

        switch (ch)
        {
        case 1:
                create(first);
                break;
        case 2:
                insert(first);
                break;
        case 3:
                display(first);
                break;
        case 4:
                delete(first);
                break;
        }
    } while (ch >= 1 && ch <= 4);

    return 0;
}

void create(list * nn)
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
        cout<<endl<<"Plase insert...";
    }
}

void insert(list * nn)
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

void display(list *nn)
{
    if (nn == NULL)
    {
        cout<<endl<<"Linked list is empty...";
    }
    else
    {
        while (nn->next != NULL)
        {
            cout<<endl<<nn->data<<" ";
            nn = nn->next;
        }
        cout<<endl<<nn->data<<" ";
    }
}

void del(list *nn)
{
    if (nn == NULL)
    {
        cout<<endl<<"Sorry, Linked list is empty...";
    }
    else if (nn->next == NULL)
    {
        cout<<endl<<nn->data<<" is deleted";
        delete(nn);
        first = NULL;
    }
    else
    {
        while (nn->next->next != NULL)
        {
            nn = nn->next;
        }
        cout<<endl<<nn->next->data<<" is deletd";
        delete(nn->next);
        nn->next = NULL;
    }
}