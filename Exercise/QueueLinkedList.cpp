#include<iostream>
using namespace std;

struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue q;

q *f, *r;

void enqueue(q *);
void dequeue(q *);
void display();

int main()
{
    int ch;
    f = NULL;
    r = NULL;

    do
    {
        cout<<endl<<"Menu for queue linkedlist";
        cout<<endl<<"1. Enqueue";
        cout<<endl<<"2. Dequeue";
        cout<<endl<<"3. Display";
        cout<<endl<<"4. Exit";

        cout<<endl<<"Enter your choise: ";
        cin>>ch;

        switch (ch)
        {
        case 1:
                enqueue(r);
                break;
        case 2:
                dequeue(f);
                break;
        case 3:
                display();
                break;
        }
    } while (ch >= 1 && ch <= 3);
    
    return 0;
}

void enqueue(q *temp)
{
    r = new q;

    cout<<endl<<"Enter the data: ";
    cin>>r->data;

    if (f == NULL)
    {
        r->next = temp;
        f = r;
    }
    else
    {
        temp->next = r;
        r->next = NULL;
    }
}

void dequeue(q *temp)
{
    cout<<endl<<f->data<<" is dequed...";

    if (f == r)
    {
        f = NULL;
        r = NULL;
    }
    else
    {
        f = f->next;
    }
    delete(temp);
}

void display()
{
    if (f == NULL && r == NULL)
    {
        "Queue linked list is empty...";
    }
    else
    {
        q *temp = f;

        while (temp != NULL)
        {
            cout<<endl<<temp->data;
            temp = temp->next;
        }
    }
}