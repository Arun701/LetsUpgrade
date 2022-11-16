#include<iostream>
using namespace std;

struct doubly
{
    int data;
    struct doubly *next, *prev;
};
typedef struct doubly dlist;

dlist *first;

void create( dlist *);
void insert( dlist *);
void del( dlist *);
void fDisplay( dlist *);
void bDisplay( dlist *);

int main()
{
    int ch;
    first = NULL;

    do
    {
        cout<<endl<<"...Menu for doubly kinl list...";
        cout<<endl<<"1. Create";
        cout<<endl<<"2. Insert";
        cout<<endl<<"3. Delete";
        cout<<endl<<"4. Display";
        cout<<endl<<"5. Reverse";
        cout<<endl<<"6. Exist";

        cout<<endl<<"Enter your choise: ";
        ch>>ch;

        switch (ch)
        {
        case 1:
                create(first);
                break;
        
        case 2:
                insert(first);
                break;
        case 3:
                del(first);
                break;
        case 4:
                fDisplay(first);
                break;
        case 5:
                bDisplay(first);
                break;
        }
    } while (ch >= 1 && ch <= 5);
    
    return 0;
}

void create( dlist *nn)
{
    if (nn == NULL)
    {
        first = new dlist;
        
        cout<<endl<<"Enter the element in list: ";
        cin>>first->data;

        first->next = NULL;
        first->prev = NULL;

        cout<<endl<<"Doubly list is created...";
    }
    else 
    {
        cout<<endl<<"Please insert...";
    }
}

void insert( dlist *nn)
{
    if (nn == NULL)
    {
        cout<<endl<<"Please create the list...";
    }
    else
    {
        while (nn->next != NULL)
        {
            nn = nn->next;
        }

        nn = new dlist;

        cout<<endl<<"Please enter the data: ";
        cin>>nn->next->data;
        nn->next->next = NULL;
        nn->next->prev = nn;

        cout<<endl<<"Data inserted...";
    }
}

void del( dlist *nn)
{
    if (nn == NULL)
    {
        cout<<endl<<"List is empty...";
    }
    else if (nn->next == NULL)
    {
        cout<<endl<<nn->data<<" is deleted...";
        delete(nn);
        first = NULL;
    }
    else
    {
        while (nn->next != NULL)
            nn = nn->next;

        cout<<endl<<nn->data<<" is deleted...";
        nn->prev->next = NULL;
        delete(nn);
    }
}

void fDisplay( dlist *nn)
{
    if (nn == NULL)
    {
        cout<<endl<<"List is empty...";
    }
    else
    {
        while (nn != NULL)
        {
            cout<<endl<<nn->data;
            nn = nn->next;
        }
    }
}
void bDispaly(dlist *nn)
{
    if (nn == NULL)
    {
        cout<<endl<<"List is empty...";
    }
    else
    {
        while (nn->next != NULL)
        {
            nn = nn->next;
        }
        while (nn != NULL)
        {
            cout<<endl<<nn->data;
            nn = nn->next;
        }
        
    }
}
