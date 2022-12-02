#include<iostream>
using namespace std;

struct doublyLinkLiest
{
    int data;
    struct doublyLinkLiest *prev;
    struct doublyLinkLiest *next;
};
typedef struct doublyLinkLiest list;

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
        cout<<endl<<"Menu for doubly link list";
        cout<<endl<<"1. Create";
        cout<<endl<<"2. Insert";
        cout<<endl<<"3. Display";
        cout<<endl<<"4. Delete";
        cout<<endl<<"5. Exit";

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
                del(first);
                break;
        }
    } while (ch >= 1 && ch <= 4);
    
    return 0;
}

void create(list *nn)
{
    if (nn == NULL)
    {
        first = new list;
        cout<<endl<<"Enter the element in list: ";
        cin>>first->data;
        first->prev = NULL;
        first->next = NULL;
    }
    else
        cout<<endl<<"Please insert...";
}

void insert(list *nn)
{
    if (nn == NULL)
        cout<<endl<<"Please create...";
    else
    {
        while (nn->next != NULL)
            nn = nn->next;

        nn->next = new list;
        cout<<endl<<"Please insert the element in the list: ";
        cin>>nn->next->data;
        nn->next->prev = nn;
        nn->next->next = NULL;
    }
}

void display(list *nn)
{
    if (nn == NULL)
        cout<<endl<<"List is empty...";
    else
    {
        while (nn != NULL)
        {
            cout<<endl<<nn->data;
            nn = nn->next;
        }
    }
}

void del(list *nn)
{
    if (nn == NULL)
        cout<<endl<<"List is empty...";
    else if (nn->next == NULL)
    {
        cout<<endl<<nn->data<<" is deleted...";
        delete(nn);
        first = NULL;
    }
    else
    {
        while (nn->next->next != NULL)
            nn = nn->next;

        cout<<endl<<nn->next->data<<" is deleted...";
        delete(nn->next);
        nn->next = NULL;
    }
}