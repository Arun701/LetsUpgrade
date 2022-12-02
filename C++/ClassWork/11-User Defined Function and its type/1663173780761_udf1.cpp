#include<iostream>
using namespace std;
void mess()
{
    cout<<endl<<"YOU ARE IN UDF";
}
int main()
{
    cout<<endl<<"IN MAIN";
    mess(); //calling udf
    cout<<endl<<"AGAIN IN MAIN";
    mess();
    cout<<endl<<" BYE FROM MAIN";

    return 0;
}
