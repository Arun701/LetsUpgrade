/*
The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance 
in meters, feet, inches and centimeters.
*/

#include<iostream>
using namespace std;

int main()
{
    float distance, meter, feet, inch, centiMeter;

    cout<<"Enter distance(KM): ";
    cin>>distance;

    meter = distance*1000;
    feet = distance*3280.84;
    inch = distance*39370.1;
    centiMeter = distance*100000;

    cout<<endl<<distance<<"(km) in meter: "<<meter;
    cout<<endl<<distance<<"(km) in feet: "<<feet;
    cout<<endl<<distance<<"(km) in inch: "<<inch;
    cout<<endl<<distance<<"(km) in centimeter: "<<centiMeter;

    return 0;

}