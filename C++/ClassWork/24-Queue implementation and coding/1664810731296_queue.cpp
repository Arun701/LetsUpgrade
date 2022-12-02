#include<iostream>
#include<iomanip>
using namespace std;

struct queue
{
    int qu[5];
    int r,f;
};
typedef struct queue queue;
queue q;
void dequeue();
void enqueue();
void disp();

int main()
{
        int ch;
        q.f=-1;
        q.r=-1;

        do
        {
            cout<<endl<<"MENU FOR SIMPLE QUEUE"<<endl;
            cout<<endl<<"1.  Enqueue";
            cout<<endl<<"2.  Dequeue";
            cout<<endl<<"3.  Display";
            cout<<endl<<"4.  Exit";
            cout<<endl<<endl<<"Enter your choice:";
            cin>>ch;

            switch(ch)
            {
                    case 1:
                            enqueue();
                            break;
                    case 2:

                            dequeue();
                            break;
                    case 3:
                           
                            disp();
                            break;
            }            
        } while (ch>=1&&ch<=3);        
}
void enqueue()
{
    if(q.r==4)
        cout<<endl<<"QUEUEU IS FULL";
    else
    {
        if(q.f==-1 && q.r==-1)
        {
            q.f=0;
            q.r=0;
        }
        else
            q.r++;

        cout<<endl<<"Enter element in queue:";
        cin>>q.qu[q.r];
    }
}
void dequeue()
{
    if(q.f==-1&&q.r==-1)
        cout<<endl<<"SORRY QUEUEU IS EMPTY..";
    else
    {
        cout<<endl<<q.qu[q.f]<<" is dequeued..";

        if(q.f==q.r)
        {
            q.f=-1;
            q.r=-1;
        }
        else
            q.f++;            
    }
}
void disp()
{
    if(q.f==-1&&q.r==-1)
        cout<<endl<<"SORRY QUEUEU IS EMPTY..";
    else
    {
        cout<<endl<<"ELEMENTS IN QUEUE "<<endl;
        for(int i=q.f;i<=q.r;i++)
            cout<<setw(5)<<q.qu[i];
    }

}

