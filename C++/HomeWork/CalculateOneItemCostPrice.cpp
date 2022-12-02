#include<iostream>
using namespace std;

int main()
{
    double sellingPrice, Profit, costPrice;

    cout<<endl<<"Enter the selling price of 15 items: ";
    cin>>sellingPrice;

    cout<<endl<<"Enter the profit of 15 items: ";
    cin>>Profit;

    costPrice = (sellingPrice - Profit) / 15;

    cout<<"Cost price of one item: "<<costPrice;

    return 0;
}