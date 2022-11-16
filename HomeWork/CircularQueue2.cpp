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
typedef struct circularQueue queue;

queue cq;

int main()
{
    int ch;
    cq.f = -1;
    cq.r = -1;

    do
    {
        cout<<endl<<"...Menu for circular queue...";
        cout<<endl<<"1. Enqueue";
        cout<<endl<<"2. Dequeue";
        cout<<endl<<"3. Display";
        cout<<endl<<"4. Exist";

        cout<<endl<<"Enter the choise: ";
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
    if (( cq.f == 0 && cq.r == 4) || (cq.f == cq.r + 1))
    {
        cout<<endl<<"Queue is full...";
    }
    else
    {
        if (cq.f == -1 && cq.r == -1)
        {
            cq.f = 0;
            cq.r = 0;
        }
        else if (cq.r == 4)
        {
            cq.r = 0;
        }
        
        else
        {
            cq.r++;
        }

        cout<<endl<<"Enter the element in circular queue: ";
        cin>>cq.qu[cq.r];
    }
}

void dequeue()
{
    if (cq.f == -1 && cq.r == -1)
    {
        cout<<endl<<"Circular queue is empty...";
    }
    else
    {
        cout<<endl<<cq.qu[cq.f]<<" is dequeued...";
        if (cq.f == 4)
        {
            cq.f = 0;
        }
        else if (cq.f == cq.r)
        {
            cq.f = -1;
            cq.r = -1;
        }
        else
        {
            cq.f++;
        }
    }
}

void display()
{
    int i;

    if ( cq.f == -1 && cq.r == -1 )
    {
        cout<<endl<<"Circular queue is empty...";
    }
    else
    {
        if (cq.f > cq.r)
        {
            for ( i = cq.f; i <= 4; i++)
            {
                cout<<endl<<cq.qu[i]<<" < "<<i<<" >";
            }
            for ( i = 0; i <= cq.r; i++)
            {
                cout<<endl<<cq.qu[i]<<" < "<<i<<" >";
            }
        }
        else
        {
            for ( i = cq.f; i <= cq.r; i++)
            {
                cout<<endl<<cq.qu[i]<<" < "<<i<<" >";
            }
        }
    }
}