#include<iostream>
using namespace std;

struct stack
{
    int data;
    struct stack * next;
};
typedef struct stack stack;
stack *top;

void push(stack *);
void pop(stack *);
void peak();
void display(stack *);

int main()
{
    int ch;
    top = NULL;

    do
    {
        cout<<endl<<"Menu for stack linked list";
        cout<<endl<<"1. Push";
        cout<<endl<<"2. Pop";
        cout<<endl<<"3. Peak";
        cout<<endl<<"4. Display";
        cout<<endl<<"5. Exist";

        cout<<endl<<"Enter the choise: ";
        cin>>ch;

        switch (ch)
        {
        case 1:
                push(top);
                break;
        
        case 2:
                pop(top);
                break;
        case 3:
                peak();
                break;
        case 4: 
                display(top);
                break;
        }
    } while (ch >= 1 && ch <= 4);
    
    return 0;
}

void push(stack * temp)
{
    top = new stack;
    cout<<endl<<"Enter the element: ";
    cin>>top->data;
    top->next = temp;
}

void pop(stack *temp)
{
    if (top == NULL)
    {
        cout<<endl<<"Stack is empty...";
    }
    else
    {
        cout<<endl<<temp->data<<" is poped...";
        top = temp->next;
        delete(temp);
    }
}

void peak()
{
    if (top == NULL)
    {
        cout<<endl<<"Stack is empty...";
    }
    else
    {
        cout<<endl<<top->data<<" is at peak...";
    }
}

void display(stack *temp)
{
    if (top == NULL)
    {
        cout<<endl<<"Stack is empty...";
    }
    else
    {
        while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        
    }
}