#include<iostream>
using namespace std;
void mergesort(int *,int *,int *,int ,int);
int main()
{
    int s1,s2,*a,*b,*c,i;

    cout<<endl<<"Enter the size of first array :";
    cin>>s1;    
    a= new int [s1];
    cout<<endl<<"Enter the size of Second array :";
    cin>>s2;
    b = new int [s2];

    for(i=0;i<s1;i++)
    {
        cout<<endl<<"Enter elements in first array(sorted):";
        cin>>*(a+i);
    } 
    for(i=0;i<s2;i++)
    {
        cout<<endl<<"Enter elements in Second array(sorted):";
        cin>>*(b+i);
    }

    c = new int [s1+s2];

    mergesort(a,b,c,s1,s2);

    cout<<endl<<"AFTER SORTING "<<endl;

    for(i=0;i<s1+s2;i++)
        cout<<endl<<"c ["<< i+1<<"] = "<<c[i];

    return 0;
}
void mergesort(int *a,int *b,int *c,int s1,int s2)
{
    int i=0,j=0,k;

    for(k=0;k<s1+s2;k++)
    {
        if(a[i]<b[j])
            c[k] = a[i++];
        else    
            c[k] = b[j++];

        if(i==s1 || j==s2)
            break;
    }
    for(++k;k<s1+s2;k++)
    {
        if(i!=s1)
            c[k]=a[i++];
        if(j!=s2)
            c[k]=b[j++];
    }
}
