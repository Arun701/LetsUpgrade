#include<iostream>
using namespace std;

int main()
{
   // Exercise: Chapter - 1B(a)

    float a;
    a = 314.562*150;
    cout<<endl<<"Multiplication of the number: "<<a;

    // Exercise: Chapter - 1C(a)
    /* g = big / 2 + big * 4 / big - big + abc / 3 ; 
    (abc = 2.5, big = 2, assume g to be a float) */

    int big = 2;
    float g, abc = 2.5;

    g = big / 2 + big * 4 / big - big + abc / 3 ;
    cout<<endl<<"Value of g: "<<g;
    
    // Exercise: Chapter - 1C(b)
    /*  on = ink * act / 2 + 3 / 2 * act + 2 + tig ; 
    (ink = 4, act = 1, tig = 3.2, assume on to be an int) 
    */

    int on, ink = 4, act = 1;
    float tig = 3.2;
    on = ink * act / 2 + 3 / 2 * act + 2 + tig ;
    cout<<endl<<"Value of on: "<<on;

    // Exercise: Chapter - 1C(c)
    /* s = qui * add / 4 - 6 / 2 + 2 / 3 * 6 / god ; 
    (qui = 4, add = 2, god = 2, assume s to be an int)
    */

    int s, qui = 4, add = 2, god = 2;
    s = qui * add / 4 - 6 / 2 + 2 / 3 * 6 / god ;
    cout<<endl<<"Value of s: "<<s;    

    return 0;
}