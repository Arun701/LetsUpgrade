#include<iostream>
using namespace std;
struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue queue;
queue *f;
queue *r;
void enqueue( queue *);
void dequeue( queue *);
void disp();

int main()
{
    int ch;
    f=NULL;
    r=NULL;
    do
    {
        cout<<endl<<"MENU FOR QUEUE USING LINKLIST "<<endl;
        cout<<endl<<" 1. ENQUEUE";
        cout<<endl<<" 2. DEQUEUE";
        cout<<endl<<" 3. DISPLAY";
        cout<<endl<<" 4. EXIT";
        cout<<endl<<endl<<"Enter your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
                    enqueue(r);
                    break;
            case 2:
                    dequeue(f);
                    break;
            case 3:
                    disp();
                    break;
        }

    } while (ch>=1&&ch<=3);
    return 0;
}
void enqueue(queue * temp)
{
    r = new queue;
    cout<<endl<<"Enter the data:";
    cin>>r->data;

    if(f==NULL)
    {
        r->next= temp;
        f=r;
    }
    else
    {
        r->next=NULL;
        temp->next=r;
    }
}
void dequeue(queue * temp)
{
    cout<<endl<<f->data<<" is dequeued..";

    if(f==r)
    {
        f=NULL;
        r=NULL;
    }
    else
    {
        f=f->next;
    }
    delete(temp);
}
void disp()
{
    if(f==NULL && r==NULL)
        cout<<endl<<"Queue is empty";
    else
    {
         queue *temp;

         temp=f;
         while(temp!=NULL)
         {
            cout<<endl<<temp->data<<" -> ";
            temp=temp->next;
         }
    }
}