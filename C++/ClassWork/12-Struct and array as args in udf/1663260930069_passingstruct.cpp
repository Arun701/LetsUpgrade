#include<iostream>
using namespace std;
struct person
{
    char nm[25];
    int age;
};
typedef struct person per;

per getdata (per);

int main()
{
    per p;

    p=getdata(p);

    cout<<endl<<"NAME :"<<p.nm;
    cout<<endl<<"AGE :"<<p.age;
    return 0;

}
per getdata(per p1)
{
    cout<<endl<<"Enter your name:";
    cin>>p1.nm;

    cout<<endl<<"Enter your age:";
    cin>>p1.age;
 
    return p1;

}

