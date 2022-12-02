#include<iostream>
#include<iomanip>
using namespace std;
struct circular
{
    int data;
    struct circular *next;
};
typedef struct circular clist;
clist *first;

void creat(clist *);
void ins(clist *);
void del(clist *);
void disp(clist *);
void insfir(clist *);
void delfir(clist *);

int main()
{
    first=NULL;
    int ch;

    do
    {
          cout<<endl<<"MENU FOR CIRCULAR LINK LIST"<<endl;
          cout<<endl<<" 1. CREATE";
          cout<<endl<<" 2. INSERT";
          cout<<endl<<" 3. DELETE";
          cout<<endl<<" 4. DISPLAY";
          cout<<endl<<" 5. INSERT FIRST";
          cout<<endl<<" 6. DELETE FIRST";
          cout<<endl<<" 7. EXIT";
          cout<<endl<<endl<<"Enter your choice:";
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
                        disp(first);
                        break;
                case 5:
                        insfir(first);
                        break;
                case 6:
                        delfir(first);
                        break;
                              
                    
          }

    } while (ch>=1&&ch<=6);

    return 0;
}
void creat(clist * nn)
{
    if(nn==NULL)
    {
        first = new clist;

        cout<<endl<<"Enter data:";
        cin>>first->data;

        first->next=first;

        cout<<endl<<"LIST CREATED..... ";
    }
    else
        cout<<endl<<"Please insert , list already created...";
}

void ins(clist * nn)
{
    if(nn==NULL)
        cout<<endl<<"Please create the list first ..";
    else
    {
        while(nn->next!=first)
            nn=nn->next;

        nn->next = new clist;

        cout<<endl<<"Enter the data :";
        cin>>nn->next->data;

        nn->next->next=first;

        cout<<endl<<" NEW NODE INSERTED AT LAST ....";
    }
}
void del(clist * nn)
{
    if(nn==NULL)
        cout<<endl<<"Sorry list is empty..";
    else if(nn->next==first)
    {
        cout<<endl<<nn->data<<" is deleted.";

        first =NULL;

        delete nn;
    }
    else
    {
        while(nn->next->next!=first)
            nn=nn->next;

        cout<<endl<<nn->next->data<<" is deleted..";

        delete nn->next;
         
        nn->next=first;

    }
}
void disp(clist *nn)
{
    if(nn==NULL)
        cout<<endl<<"Sorry list is empty..";
    else 
    {
        cout<<endl<<"ELEMENTS IN CIRCULAR LINKLIST"<<endl;

        while(nn->next!=first)
        {
            cout<<setw(3)<<nn->data<<" ->";

            nn=nn->next;
        }
        cout<<setw(5)<<nn->data;
    }
}

void insfir(clist * nn)
{
    if(nn==NULL)
        cout<<endl<<"Please create the list first ..";
    else
    {
       
        first= new clist;

        cout<<endl<<"Enter the data :";
        cin>>first->data;

        first->next=nn;

        while(nn->next!=first->next)
            nn=nn->next;

        nn->next=first;

        cout<<endl<<" NEW NODE INSERTED AT LAST ....";
    }
}
void delfir(clist * nn)
{
    if(nn==NULL)
        cout<<endl<<"Sorry list is empty..";
    else
    {
        cout<<endl<<first->data<<" is deleted.";

        while(nn->next!=first)
            nn=nn->next;

        nn->next=first->next;

        delete first;

        first=nn->next;    
        
    }
}