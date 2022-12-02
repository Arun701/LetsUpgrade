#include<iostream>
#include<iomanip>
using namespace std;

struct circularqueue
{
    int qu[5];
    int r,f;
};
typedef struct circularqueue circular;
circular q;
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
            cout<<endl<<"MENU FOR CIRCULAR QUEUE"<<endl;
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
    if((q.f==0 && q.r==4)||(q.f==q.r +1))
        cout<<endl<<"QUEUE IS FULL.....";
    else
    {
        if(q.f==-1 && q.r==-1)
        {
            q.f=0;
            q.r=0;
        }
        else if(q.r==4)
            q.r=0;
        else
            q.r++;

        cout<<endl<<"Enter element:";
        cin>>q.qu[q.r];
    }
}
void dequeue()
{
    if(q.f==-1 && q.r==-1)
        cout<<endl<<"QUEUE IS EMPTY...";
    else
    {
        cout<<endl<<q.qu[q.f]<<" is dequeded...";

        if(q.f==4)
            q.f=0;
        else if(q.f==q.r)
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
    int i;
    if(q.f==-1 && q.r==-1)
         cout<<endl<<"QUEUE IS EMPTY...";
    else
    {
        cout<<"ELEMENTS IN QUEUE"<<endl;

        if(q.f>q.r)
        {
            for(i=q.f;i<=4;i++)
                cout<<endl<<i<<"<->"<<setw(3)<<q.qu[i];            
            for(i=0;i<=q.r;i++)
                cout<<endl<<i<<"<->"<<setw(3)<<q.qu[i]; 
            
        }
        else
        {
            for(i=q.f;i<=q.r;i++)
                cout<<endl<<i<<"<->"<<setw(3)<<q.qu[i]; 
            
        }

    }
}
