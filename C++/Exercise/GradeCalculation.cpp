#include<iostream>
using namespace std;

int main()
{
    int score;

    cout<<endl<<"Enter the score between 0-100: ";
    cin>>score;

    if (score>=90 && score<=100)
    {
        cout<<endl<<"Grade of the score is A";
    }
    else if (score>=80 && score<=89)
    {
        cout<<endl<<"Grade of the score is B";
    }
    else if (score>=70 && score<=79)
    {
        cout<<endl<<"Grade of the score is C";
    }
    else if (score>=60 && score<=69)
    {
        cout<<endl<<"Grade of the score is D";
    }
    else if (score>=0 && score<=59)
    {
        cout<<endl<<"Grade of the score is F";
    }
    else
        cout<<endl<<"Entered score is not between 0-100.";

    return 0;
}