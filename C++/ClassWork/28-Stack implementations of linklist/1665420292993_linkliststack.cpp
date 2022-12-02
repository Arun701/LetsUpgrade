#include<iostream>
using namespace std;
struct stacks
{
    int data;
    struct stacks *next;
};
typedef struct stacks stack;

stack * top;

void push(stack *);
void pop(stack *);
void peek();
void disp(stack *);

int main()
{
     int ch;
     top=NULL;

     do
     {
        cout<<endl<<"MENU OF STACK USING LINKLIST"<<endl;
        cout<<endl<<" 1. PUSH ";
        cout<<endl<<" 2. POP";
        cout<<endl<<" 3. PEEK";
        cout<<endl<<" 4. DISPLAY";
        cout<<endl<<" 5. EXIT";
        cout<<endl<<endl<<" Enter your choice :";
        cin>>ch;

        switch(ch)
        {
            case 1:
                    push(top);
                    break;
            case 2:
                    pop(top);
                    break;
            case 3: 
                    peek();
                    break;
            case 4:
                    disp(top);
                    break;
        }
     } while (ch>=1 && ch<=4);

     return 0;     
}
void push(stack *temp)
{
    top = new stack;

    cout<<endl<<"Enter data :";
    cin>>top->data;

    top->next=temp; 
}
void pop(stack  * temp)
{
    if(top==NULL)
        cout<<endl<<"STACK IS EMPTY.";
    else
    {
        cout<<endl<<temp->data<<"is poped";
        top=temp->next;
        delete(temp);
    }
}

void peek()
{
    if(top == NULL)
        cout<<endl<<"STACK IS EMPTY..";
    else
        cout<<endl<<top->data<<" is on the top";
}

void disp(stack *temp)
{
    if(top == NULL)
        cout<<endl<<"STACK IS EMPTY..";
    else
    {
        cout<<endl<<"Elemnets in stack.."<<endl;
        while(temp!=NULL)
        {
            cout<<endl<<temp->data;
            temp=temp->next;
        }
    }
}