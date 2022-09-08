/*Two numbers are input through the keyboard into two 
locations C and D. Write a program to interchange the 
contents of C and D.
*/

#include<iostream>
#include<string>
using namespace std;

int main()

{
    string C, D, E;

    cout<<endl<<"Enter the location of C: ";
    cin>>C;

    cout<<endl<<"Enter the location of D: ";
    cin>>D;

    E = D;
    D = C;
    C = E;

    cout<<endl<<"Swaped value of C: "<<C;
    cout<<endl<<"Swaped value of D: "<<D;
    
    return 0;
}