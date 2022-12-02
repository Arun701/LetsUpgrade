#include<iostream>
using namespace std;

int main()
{
    double costPrice, sellingPrice;

    cout<<endl<<"Enter the cost price of the item: ";
    cin>>costPrice;

    cout<<endl<<"Enter the selling price os the item: ";
    cin>>sellingPrice;

    if (sellingPrice > costPrice)
    {
        cout<<endl<<"Profit: "<<sellingPrice - costPrice;
    }
    else
        cout<<endl<<"Loss: "<<costPrice - sellingPrice;

    return 0;
}