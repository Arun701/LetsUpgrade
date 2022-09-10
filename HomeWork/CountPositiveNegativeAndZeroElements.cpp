#include<iostream>
using namespace std;

int main()
{
    int a[10] = {1, 10, 20, 0, -100, 0, -10, 0, 20, -3}, positiveCount, negativeCount, zeroCount, i;
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;

    for (i = 0; i < 10; i++)
    {
        if (a[i] > 0)
        {
            positiveCount += 1;
        }
        else if (a[i] < 0)
        {
            negativeCount += 1;
        }
        else
        {
            zeroCount += 1;
        }   
  
    }

    cout<<endl<<"Positive count: "<<positiveCount;
    cout<<endl<<"Negative count: "<<negativeCount; 
    cout<<endl<<"Zero count: "<<zeroCount;
    
    return 0; 
}