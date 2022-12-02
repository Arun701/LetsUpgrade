#include<iostream>
#include<iomanip>
using namespace std;

struct doubly
{
    int data;
    struct doubly *next,*prev;
};
typedef struct doubly dlist;
dlist *first;

void creat(dlist *);
void ins(dlist*);
void del(dlist *);
void dispf(dlist *);
void dispb(dlist *);

int main()
{
    int ch;
    first= NULL;

    do
    {
        cout<<endl<<"MENU FOR DOUBLY LINKLIST "<<endl;
        cout<<endl<<"1. CREATE";
        cout<<endl<<"2. INSERT";
        cout<<endl<<"3. DELETE";
        cout<<endl<<"4. REVERSE";
        cout<<endl<<"5. DISPLAY";
        cout<<endl<<"Enter your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
                    creat(first);
                    break;
            case 2:
                    ins(first);
                    break;
            case 3:
                    del(first);
                    break;
            case 4:
                    dispb(first);
                    break;
            case 5:
                    dispf(first);
                    break;
        }
    } while (ch>=1 && ch<=5);
    
}

void creat(dlist *nn)
{
    if(nn==NULL)
    {
        first = new dlist;
        cout<<endl<<"Enter data:";
        cin>>first->data;
        first->next=NULL;
        first->prev=NULL;

        cout<<endl<<"List created......";
    }
    else
        cout<<endl<<"Insert the new..";

}
void ins(dlist *nn)
{
        if(nn==NULL)
            cout<<endl<<"Please create first";
        else 
        {
            while(nn->next!=NULL)
                nn=nn->next;
            
            nn->next = new dlist;

            cout<<endl<<"Enter the data ";
            cin>>nn->next->data;
            nn->next->next=NULL;
            nn->next->prev=nn;

            cout<<endl<<"Node inserted...";
        }
}
void del(dlist *nn)
{
        if(nn==NULL)
            cout<<endl<<"Sorry list is empty.....";
        else if (nn->next==NULL)
        {
            cout<<endl<<nn->data<<" is deleted.";
            first=NULL;
            delete(nn);
        }
        else
        {
            while(nn->next!=NULL)
                nn=nn->next;

            cout<<endl<<nn->data<<" is deleted...";            
            nn->prev->next=NULL;
            delete(nn);

        }
}
void dispf(dlist *nn)
{
    if(nn==NULL)
        cout<<endl<<"Sorry list is empty..";
    else
    {
        cout<<endl<<" Data in list"<<endl;
    
        while(nn!=NULL)
        {
            cout<<setw(3)<<nn->data<<" -> ";
            nn=nn->next;
        }
    }
}
void dispb(dlist *nn)
{
    if(nn==NULL)
        cout<<endl<<"Sorry list is empty..";
    else
    {
        cout<<endl<<" Reverse list"<<endl;
    
        while(nn->next!=NULL)
                nn=nn->next;

        while(nn!=NULL)
        {
            cout<<setw(3)<<nn->data<<" <- ";
            nn=nn->prev;
        }
        
    }
}