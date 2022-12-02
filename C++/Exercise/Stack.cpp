#include<iostream>
using namespace std;

struct Stack
{
    int st[5];
    int top;
};
typedef struct Stack Stack;

Stack s;

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
        cout<<endl<<"1. Push";
        cout<<endl<<"2. Pop";
        cout<<endl<<"3. Display";
        cout<<endl<<"4. Peak";
        cout<<endl<<"5. IsEmpty";
        cout<<endl<<"6. IsFull";
        cout<<endl<<"7. Exist";

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
    if ( s.top == 4)
    {
        cout<<endl<<"Stack is full...";
    }
    else
    {
        s.top++;
        cout<<endl<<"Enter the element in the Stack: ";
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
        cout<<endl<<s.st[s.top]<<" element poped";
        s.top--;
    }
}

void display()
{
    if ( s.top == -1)
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
        cout<<endl<<s.st[s.top]<<" peak element";
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
        cout<<endl<<"No, Stack has elements...";
    }
}

void isFull()
{
    if (s.top == 4)
    {
        cout<<endl<<"Yes, Srack is full...";
    }
    else
    {
        cout<<endl<<"No, Stack is empty...";
    }
}