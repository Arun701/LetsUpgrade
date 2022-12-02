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
    s.top=-1;

    do
    {
        cout<<endl<<"MENU FOR STACK";
        cout<<endl<<" 1.  PUSH";
        cout<<endl<<" 2.  POP";
        cout<<endl<<" 3.  PEEK";
        cout<<endl<<" 4.  ISEMPTY";
        cout<<endl<<" 5.  ISFULL";
        cout<<endl<<" 6.  DISPLAY";
        cout<<endl<<" 7.  EXIT";

        cout<<endl<<endl<<"Enter your choice:";
        cin>>ch;
        switch(ch)
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
    } while (ch>=1 && ch<=6);

    return 0;

}
void push()
{
    if(s.top==4)
        cout<<endl<<"STACK IS OVERFLOW ..";
    else
    {
        s.top++;

        cout<<endl<<"Enter element to be pushed :";
        cin>>s.st[s.top];

        cout<<endl<<s.st[s.top]<<" is pushed in stack.";
    }
}
void pop()
{
    if(s.top==-1)
        cout<<endl<<"STACK IS UNDERFLOW.";
    else
    {
        cout<<endl<<s.st[s.top]<<"  is poped out from stack";
        
        s.top--;
    }
}
void peek()
{
    if(s.top==-1)
        cout<<endl<<"STACK IS UNDERFLOW.";
    else
        cout<<endl<<s.st[s.top]<<"  is at the top of stack";
   
}
void isempty()
{
    if(s.top==-1)
        cout<<endl<<"YES , STACK IS EMPTY";
    else
        cout<<endl<<"NO , there elements in stack";   
}
void isfull()
{
    if(s.top==4)
        cout<<endl<<"YES , STACK IS FULL";
    else
        cout<<endl<<"NO , there place to push in stack";   
}
void disp()
{
    if(s.top==-1)
        cout<<endl<<"STACK IS UNDERFLOW.";
    else
    {
        cout<<endl<<" ELEMENTS IN STACK "<<endl;

        for(int i=s.top;i>=0;i--)
            cout<<endl<<"  "<<s.st[i];
    }

}
   

