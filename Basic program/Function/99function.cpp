// using function array calling largest and smallest no.
#include<iostream>
using namespace std;
#define n 5     // symbolic constant
int manimum(int a[])
{
   int i,t;
   t=a[0];
    for (i=0;i<n;i++)
    {
        if(a[i]<t)
        t=a[i];
    } 
    return t;
}
int maximum(int a[])
{
   int i,t;
   t=a[0];
    for (i=0;i<n;i++)
    {
        if(a[i]>t)
        t=a[i];
    } 
    return t;
}
int main()
{
    int i,a[n];
    for (i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    
    cout<<"Maximum number is:"<<maximum(a);
    cout<<"\nMinimum number is:"<<manimum(a);
}