#include<iostream>
using namespace std;

struct CircularQueueUsingCircularLinkedList
{
    int data;
    struct CircularQueueUsingCircularLinkedList *next;
};
typedef struct CircularQueueUsingCircularLinkedList qc;

qc *f, *r;

void enque();
void deque();
void disp();

int main()
{
    int ch;
    f = NULL;
    r = NULL;

    do
    {
        cout<<endl<<"Menu for circular queue using circular link list"<<endl;
        cout<<endl<<"1. Enqueue";
        cout<<endl<<"2. Dequeue";
        cout<<endl<<"3. Display";
        cout<<endl<<"4. Exit";

        cout<<endl<<"Enter your choise: ";
        cin>>ch;

        switch (ch)
        {
        case 1:
                enque();
                break;
        
        case 2:
                deque();
                break;
        case 3:
                disp();
                break;
        }
    } while (ch >= 1 && ch <= 3);
    
    return 0;
}

void enque()
{
    qc *temp;
    temp = r;
    r = new qc;
    cout<<"Enter the element: ";
    cin>>r->data;

    if (f == NULL)
    {
        f = r;
        r->next = f;
    }
    else
    {
        temp->next = r;
        r->next = f;
    }
}

void deque()
{
    qc *temp;
    
    if (f == NULL && r == NULL)
    {
        cout<<endl<<"Queue is empty...";
    }
    else
    {
        cout<<endl<<f->data<<" is dequeued...";

        if (f == r)
        {
            f = NULL;
            r = NULL;
            delete(f);
        }
        else
        {
            temp = f;
            f = f->next;
            r->next = f;
            delete(temp);
        }
    }
}

void disp()
{
    qc *temp;

    if (f == NULL && r == NULL)
    {
        cout<<endl<<"Queue is empty...";
    }
    else
    {
        temp = f;
        while (temp != r)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<" ";
    }
}