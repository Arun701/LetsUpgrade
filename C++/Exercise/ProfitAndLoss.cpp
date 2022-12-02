/*
If cost price and selling price of an item is input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit 
he made or loss he incurred.
*/

#include<iostream>
using namespace std;

int main()
{
    int costPrice, sellingPrice;

    cout<<endl<<"Enter cost price of the product: ";
    cin>>costPrice;

    cout<<endl<<"Enter selling price of the product: ";
    cin>>sellingPrice;

    if (costPrice < sellingPrice)
    {
        cout<<endl<<"Profit of the product: "<<sellingPrice-costPrice;
    }
    else
    {
        cout<<endl<<"Loss of the product: "<<costPrice-sellingPrice;
    }
    
    return 0;
}
