#include<iostream>
using namespace std;

int main()
{
    double cityDistance, inMeter, inFeet, inInches, inCentimeter;

    cout<<endl<<"Enter the distance between two cities in KM: ";
    cin>>cityDistance;

    inMeter = 1000 * cityDistance;

    inFeet = 3280.84 * cityDistance;

    inInches = 39370.1 * cityDistance;

    inCentimeter = 100000 * cityDistance;

    cout<<endl<<cityDistance<<" KM to meter is: "<<inMeter;
    cout<<endl<<cityDistance<<" KM to feet is: "<<inFeet;
    cout<<endl<<cityDistance<<" KM to inches is: "<<inInches;
    cout<<endl<<cityDistance<<" KM to centimeter is: "<<inCentimeter;

    return 0;
}