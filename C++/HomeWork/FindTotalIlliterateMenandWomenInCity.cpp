#include<iostream>
using namespace std;

int main()
{
    int population = 80000, menPercentage = 52, womenPercentage;
    int totalMen, totalWomen, litrateMen, litrateMenWomen, litrateWomen;

    totalMen = (population * 52) / 100;
    totalWomen = population - totalMen;

    cout<<endl<<"Total men: "<<totalMen;
    cout<<endl<<"Total women: "<<totalWomen;

    litrateMenWomen = (population * 48) / 100;

    litrateMen = (population * 35) / 100;
    litrateWomen = litrateMenWomen - litrateMen;

    cout<<endl<<"Total illiterate men: "<<totalMen - litrateMen;
    cout<<endl<<"Total illiterate women: "<<totalWomen - litrateWomen;
    
    return 0;
}