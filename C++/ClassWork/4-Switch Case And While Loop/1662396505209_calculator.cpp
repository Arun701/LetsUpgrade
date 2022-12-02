#include<iostream>
using namespace std;
int main()
{
    //int ch;
    char ch;
    int a,b,c;
    float ans;

    cout<<endl<<"MENU MATHAMATICAL OPERATION "<<endl;
    cout<<endl<<" + ";
    cout<<endl<<" - ";
    cout<<endl<<" * ";
    cout<<endl<<" / ";
    cout<<endl<<" % ";
    cout<<endl<<"ENTER YOUR CHOICE :";
    cin>>ch;

    cout<<endl<<"ENTER VALUE IN A :";
    cin>>a;
    cout<<endl<<"ENTER VALUE IN B :";
    cin>>b;    

    switch(ch)
    {
        case '+':
                    c=a+b;
                    cout<<endl<<"ADDITION IS :"<<c;
                    break;
        case '*':
                    c=a*b;
                    cout<<endl<<"MULTIPLICTION IS :"<<c;
                    break;
        case '-':
                    c=a-b;
                    cout<<endl<<"SUBSTRACTION IS :"<<c;
                    break;
        case '/':
                    ans=(float)a/b;
                    cout<<endl<<"DIVISION IS :"<<ans;
                    break;
        case '%':
                    c=a%b;
                    cout<<endl<<"REMAINDER IS :"<<c;
                    break;
        default :
                    cout<<endl<<"NO SUCH OPERATORS AVAILABLE.";

    }
    
}