#include<iostream>
using namespace std;
struct person
{
    char nm[25];
    int age;
};
typedef struct person per;

void getdata (per);
void showdata(per);

int main()
{
    per p;
    getdata(p);
    cout<<endl<<"BACK TO MAIN";    
    return 0;
}
void getdata(per p1)
{
    cout<<endl<<"Enter your name:";
    cin>>p1.nm;
    cout<<endl<<"Enter your age:";
    cin>>p1.age;
 
    showdata(p1);
    cout<<endl<<"BACK TO GETDATA ";
}
void showdata(per p2)
{
    cout<<endl<<"NAME :"<<p2.nm;
    cout<<endl<<"AGE :"<<p2.age;
}

