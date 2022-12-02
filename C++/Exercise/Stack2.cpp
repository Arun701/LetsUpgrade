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
void display();
void peak();
void isEmpty();
void isFull();

int main()
{
    int ch;
    s.top = -1;

    do
    {
        cout<<endl<<"...Menu for Stack...";
        cout<<endl<<"1. push";
        cout<<endl<<"2. pop";
        cout<<endl<<"3. display";
        cout<<endl<<"4. peak";
        cout<<endl<<"5. isEmpty";
        cout<<endl<<"6. isFull";
        cout<<endl<<"7. exist";

        cout<<endl<<"Enter the choise: ";
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
                display();
                break;
        case 4:
                peak();
                break;
        case 5:
                isEmpty();
                break;
        case 6:
                isFull();
                break;
        }

    } while (ch >= 1 && ch <= 6);
    
    return 0;
}

void push()
{
    if (s.top == 4)
    {
        cout<<endl<<"Stack is full...";
    }
    else
    {
        s.top++;
        cout<<endl<<"Enter the element in stack: ";
        cin>>s.st[s.top];
    }
}

void pop()
{
    if (s.top == -1)
    {
        cout<<endl<<"Stack is empty...";
    }
    else
    {
        cout<<endl<<s.st[s.top]<<" is poped...";
        s.top--;
    }
}

void display()
{
    if (s.top == -1)
    {
        cout<<endl<<"Stack is empty...";
    }
    else
    {
        cout<<endl<<"...Stack elements...";
        for (int i = s.top; i >= 0; i--)
        {
            cout<<endl<<s.st[i];
        }
    }
}

void peak()
{
    if (s.top == -1)
    {
        cout<<endl<<"Stack is empty...";
    }
    else
    {
        cout<<endl<<s.st[s.top]<<" is peaked element...";
    }
}

void isEmpty()
{
    if (s.top == -1)
    {
        cout<<endl<<"Yes, Stack is empty...";
    }
    else
    {
        cout<<endl<<"No, Stack have element...";
    }
}

void isFull()
{
    if (s.top == 4)
    {
        cout<<endl<<"Yes, Stack is full...";
    }
    else
    {
        cout<<endl<<"No, Stack is not full...";
    }
}