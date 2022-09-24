#include<iostream>
using namespace std;

int main()
{
    double lenOFRec, breadthOfRec, radOfCir, arOfRec, perOfRec, arOfCir;

    cout<<endl<<"Enter the length of rectangle: ";
    cin>>lenOFRec;

    cout<<endl<<"Enter the breadth of rectangle: ";
    cin>>breadthOfRec;

    cout<<endl<<"Enter the radious of circle: ";
    cin>>radOfCir;

    arOfRec = lenOFRec * breadthOfRec;

    perOfRec = 2 * (lenOFRec + breadthOfRec);

    arOfCir = 3.14 * radOfCir * radOfCir;

    cout<<endl<<"Area of rectangle: "<<arOfRec;
    cout<<endl<<"Perimeter of rectangle: "<<perOfRec;
    cout<<endl<<"Area of circle: "<<arOfCir;

    return 0;
}