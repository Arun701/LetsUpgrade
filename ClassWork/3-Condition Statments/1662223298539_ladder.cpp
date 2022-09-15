#include<iostream>
using namespace std;

int main()
{
        float per;

        cout<<endl<<"Enter your percentage :";
        cin>>per;

        if(per>=90)
            cout<<endl<<"GRADE A ";
        else if(per>=80)
            cout<<endl<<"GRADE B";
        else if(per>=70)
            cout<<endl<<"GRADE C";
        else if(per>=60)
            cout<<endl<<"GRADE D";
        else if(per>=50)
            cout<<endl<<"GRADE E";
        else if(per>=40)
            cout<<endl<<"GRADE F";
        else
            cout<<endl<<"GRADE G";
            
    return 0;
}
