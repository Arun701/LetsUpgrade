#include<iostream>
using namespace std;

void enqueue();
void dequeue();
void disp();
void search();

struct queue
{
    int qu[5];
    int f, r;
};
typedef struct queue queue;

queue q;

int main()
{
    int ch;
    q.f = -1;
    q.r = -1;

    do
    {
        cout<<endl<<"Menu for queue";
        cout<<endl<<"1. Enqueue";
        cout<<endl<<"2. Dequeue";
        cout<<endl<<"3. Display";
        cout<<endl<<"4. Search";
        cout<<endl<<"5. Exit";

        cout<<endl<<"Enter the choise: ";
        cin>>ch;

        switch (ch)
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

        case 4:
            search();
            break;
        }

    } while (ch >= 1 && ch <= 4);
    
    return 0;
}

void enqueue()
{
    if (q.r == 4)
    {
        cout<<endl<<"Queue is full...";
    }
    else
    {
        if (q.f == -1 && q.r == -1)
        {
            q.f = 0;
            q.r = 0;
        }
        else
            q.r++;
        
        cout<<endl<<"Enter the element in queue: ";
        cin>>q.qu[q.r];
    }   
}

void dequeue()
{
    if (q.f == -1 && q.r == -1)
    {
        cout<<endl<<"Queue is empty...";
    }
    else
    {
        cout<<endl<<q.qu[q.f]<<" is deleted or queued...";

        if (q.f == q.r)
        {
            q.f = -1;
            q.r = -1;
        }
        else
        {
            q.f++;
        }
    }   
}

void disp()
{
    int i;

    if (q.f == -1 && q.r == -1)
    {
        cout<<endl<<"Queue is empty...";
    }
    else
    {
        cout<<endl<<"Element in queue...";
        for ( i = q.f; i <= q.r; i++)
        {
            cout<<endl<<q.qu[i];
        } 
    }
}

void search()
{
    int m, n, flag = 0, l = q.f, h = q.r;

    cout<<endl<<"Enter the number to be found: ";
    cin>>n;

    if (l == -1 && h == -1)
    {
        cout<<endl<<"Queue is empty...";
    }
    else
    {
        while (l <= h)
        {
            m = (l + h) / 2;
            if (n > q.qu[m])
            {
                q.f = m + 1;
            }
            else if (n < q.qu[m])
            {
                q.r = m - 1;
            }
            else
                flag = 1;  
        }
        if (flag == 1)
        {
            cout<<endl<<n<<" is found...";
        }
        else
        {
            cout<<endl<<n<<" is not found...";
        }
        
        
    }
    
    
}