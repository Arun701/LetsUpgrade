#include<iostream>
using namespace std;

struct stack
{
    int st[5];
    int top;
};
typedef struct stack stack;

stack s;

void push();
void pop();
void disp();
void peek();
void isempty();
void isfull();

int main()
{
    int ch;
    s.top = -1;

    do
    {
        cout<<endl<<"Menu for stack...";
        cout<<endl<<"1. push";
        cout<<endl<<"2. pop";
        cout<<endl<<"3. peek";
        cout<<endl<<"4. isempty";
        cout<<endl<<"5. isfull";
        cout<<endl<<"6. display";
        cout<<endl<<"7. exist";

        cout<<endl<<"Enter your choise: ";
        cin>>ch;

        switch (ch)
        {
        case 1: 
                push();
                break;

        case 2:
                pop();
                break;

        case 3:
                peek();
                break;

        case 4:
                isempty();
                break;

        case 5:
                isfull();
                break;

        case 6:
                disp();
                break;
        }

    return 0;

    } while (ch >= 1 && ch <= 6);

}

void push()
{
    if (s.top == 4)
    {
        cout<<endl<<"Stack over flow...";
    }
    else
    {
        s.top++;
        cout<<endl<<"Enter the element to be push: ";
        cin>>s.st[s.top];
        cout<<endl<<s.st[s.top]<<" pushed in stack...";
    }
}

void pop()
{
    if (s.top == -1)
    {
        cout<<endl<<"Stack is Under flow";
    }
    else
    {
        cout<<endl<<s.st[s.top]<<" is poped out from the stack";
        s.top--;
    }  
}

void peek()
{
    if (s.top == -1)
    {
        cout<<endl<<"Stack is Underflow";
    }
    else
    {
        cout<<endl<<s.st[s.top]<<" is at the top stack";
    }
    
}