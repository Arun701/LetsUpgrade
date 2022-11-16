#include<iostream>
#include<iomanip>
using namespace std;
struct linklist
{
    int data;
    struct linklist *next;
};
typedef struct linklist list;
list * first;

void creat( list *);
void ins(list *);
void del( list *);
void disp(list *);
void insfir(list *);
void delfir(list *);
void sort(list *);
void search(list *);

int main()
{
    first=NULL;
    int ch;

    do
    {
          cout<<endl<<"MENU FOR LINK LIST"<<endl;
          cout<<endl<<" 1. CREATE";
          cout<<endl<<" 2. INSERT";
          cout<<endl<<" 3. DELETE";
          cout<<endl<<" 4. DIAPLAY";
          cout<<endl<<" 5. INSERT FIRST";
          cout<<endl<<" 6. DELETE FIRST";
          cout<<endl<<" 7. SORT";
          cout<<endl<<" 8. SEARCH";
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
                case 7:
                        sort(first);
                        break;
                case 8:
                        search(first);
                        break;
                
                    
          }

    } while (ch>=1&&ch<=8);

    return 0;
}
void creat(list * nn)
{
    if(nn==NULL)
    {
        first =new list;
        cout<<endl<<"Enter data :";
        cin>>first->data;
        first->next=NULL;

        cout<<endl<<"First node is create";
    }
    else
        cout<<endl<<"List is created , please insert now.";
}
void ins(list * nn)
{
    if(nn==NULL)
        cout<<endl<<"please create first";
    else
    {
        while(nn->next!=NULL)
            nn=nn->next;

        nn->next= new list;
        cout<<endl<<"Enter data :";
        cin>>nn->next->data;
        nn->next->next=NULL;

        cout<<endl<<"node is create";
    }
}

void del(list * nn)
{
    if(nn==NULL)
        cout<<endl<<"SORRY LIST IS EMPTY ...";
    else if(nn->next==NULL) 
    {
        cout<<endl<<nn->data<<" is deleted .";
        delete(nn);
        first=NULL;
    }
    else
    {
        while(nn->next->next!=NULL)
                nn=nn->next;

        cout<<endl<<nn->next->data<<" is deleted .";
        delete(nn->next);
        nn->next=NULL;
    }
}
void disp(list * nn)
{
    if(nn==NULL)
        cout<<endl<<"SORRY LIST IS EMPTY .";
    else
    {
        cout<<endl<<"ELEMENTS IN LIST ARE"<<endl;

        while(nn!=NULL)
        {
            cout<<setw(4)<<nn->data<<" -> ";
            nn=nn->next;
        } 
        cout<<"NULL";   
    }
}
void insfir(list *nn)
{
    if(nn==NULL)
        cout<<endl<<"PLEASE CREATE THE LIST...";
    else
    {
        first=new list;

        cout<<endl<<"Enter the data:";
        cin>>first->data;

        first->next=nn;

    }
}
void delfir(list * nn)
{
    if(nn==NULL)
        cout<<endl<<"SORRY LIST IS EMPTY ...";
    else  
    {
        cout<<endl<<nn->data<<" is deleted .";
        first=nn->next;
        delete(nn);
    }
}
void search(list * nn)
{   
    int v,f=0,c=0;

    if(nn==NULL)
         cout<<endl<<"SORRY LIST IS EMPTY .";
    else
    {
         cout<<endl<<"Enter the value to search :";
         cin>>v;

        while(nn!=NULL)
        {
            c++;
            if(v==nn->data)
            {
                f=1;
                cout<<endl<<v<<" found at "<<c<<"th node";
                break;
            }
            nn=nn->next;
        } 
       if(f==0)
        cout<<endl<<"VALUE NOT FOUND...";
    }
}

void sort(list *nn)
{
    int t;
    list * temp;

    while(nn->next!=NULL)
    {
        temp=nn->next;
        while(temp!=NULL)
        {
            if(nn->data>temp->data)
            {
                t=nn->data;
                nn->data=temp->data;
                temp->data=t;
            }
            temp=temp->next;
        }
        nn=nn->next;
    }
}