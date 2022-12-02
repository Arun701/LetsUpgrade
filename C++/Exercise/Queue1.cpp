#include<iostream>
using namespace std;

struct queue
{
    int qu[5];
    int f, r;
};

typedef struct queue queue;
queue q;

void enqueue();
void dequeue();
void display();

int main()
{
    int ch;
    q.f = -1;
    q.r = -1;

    do
    {
        cout<<endl<<"...Menu for queue...";
        cout<<endl<<"1. Enqueue";
        cout<<endl<<"2. Dequeue";
        cout<<endl<<"3. Display";
        cout<<endl<<"4. Exist";
        cout<<endl<<"Enter your choise: ";
        cin>>ch;

        switch (ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
        } 
    } while (ch >= 1 && ch <= 3);

    return 0;
}
void enqueue()
{
    if ( q.r == 4)
    {
        cout<<endl<<"Queue is full...";
    }
    else 
    {
        if ( q.f == -1 && q.r == -1 )
        {
            q.f = 0;
            q.r = 0;
        }
        else
        {
            q.r++;
        }
        cout<<endl<<"Enter the data: ";
        cin>>q.qu[q.r];
    }
}
void dequeue()
{
    if (q.f == -1 && q.r == -1)
    {
        cout<<endl<<"Queue is empty...";
    }
    else
    {
        cout<<endl<<q.qu[q.f]<<" is dequeued...";
        if ( q.f == q.r)
        {
            q.f = -1;
            q.r = -1;
        }
        else
        {
            q.f++;
        }
    }
}
void display()
{
    if ( q.f == -1 && q.r == -1)
    {
        cout<<endl<<"Queue is empty...";
    }
    else
    {
        for (int i = q.f; i <= q.r; i++)
        {
            cout<<endl<<q.qu[i];
        }
    }
}
