/* The length & breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & 
circumference of the circle. 
*/

#include<iostream>
using namespace std;

int main()

{
    float length, breadth, radius, areaOfReactangle, perimeterOfRectangle, areaOfCircle, circumferenceOfCircle;

    cout<<endl<<"Enter lenght of rectanlge: ";
    cin>>length;

    cout<<endl<<"Enter breadth of rectangle: ";
    cin>>breadth;

    cout<<endl<<"Enter radius of circle: ";
    cin>>radius;

    areaOfReactangle = length*breadth;
    perimeterOfRectangle = 2*(length + breadth);

    areaOfCircle = 3.14 * radius * radius;
    circumferenceOfCircle = 2 * 3.14 * radius;

    cout<<endl<<"Area of the rectangle: "<<areaOfReactangle<<endl;
    cout<<endl<<"perimeter of the rectangle: "<<perimeterOfRectangle<<endl;

    cout<<endl<<"Area of the circle: "<<areaOfCircle<<endl;
    cout<<endl<<"Circumference of the circle: "<<circumferenceOfCircle<<endl;

    return 0;
}