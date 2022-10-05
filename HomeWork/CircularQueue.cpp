#include<iostream>
using namespace std;

void enqueue();
void dequeue();
void display();

struct circularQueue
{
    int qu[5];
    int f, r;
};
typedef struct circularQueue circularQueue;

circularQueue q;

int main()
{
    int ch;
    q.f = -1, q.r = -1;

    do
    {
        cout<<endl<<"Menu for circular queue";
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
    if ((q.f == 0 && q.r == 4) || (q.f == q.r + 1))
    {
        cout<<endl<<"Queue is full...";
    }
    else
    {
        if (q.f == -1 && q.r == -1)
        {
            q.f = 0;
            q.r = 0;
        }
        if (q.r == 4)
        {
            q.r == 0;
        }
        else
        {
            q.r++;
        }
        cout<<endl<<"Enter the element: ";
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
        if (q.f == 4)
        {
            q.f == 0;
        }
        else
        {
            q.f++;
        }
    } 
}

void display()
{
    int i;

    if (q.f == -1 && q.r == -1)
    {
        cout<<endl<<"Queue is empty...";
    }
    else
    {
        if (q.f > q.r)
        {
            for (i = 0; i <= 4; i++)
            {
                cout<<endl<<i<<" -- "<<q.qu[i];
            }
            for (i = 0; i <=q.r ; i++)
            {
                cout<<endl<<i<<" -- "<<q.qu[i];
            } 
        }
        else
        {
            cout<<endl<<i<<" -- "<<q.qu[i];
        }  
    }
}