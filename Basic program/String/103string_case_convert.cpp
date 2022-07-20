#include<iostream>
using namespace std;
int main()
{
    char a[20],b[20];
    int i;
    cout<<"Enter String\n";
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65&&a[i]<=90)
        a[i]+=32;
        else if(a[i]==32)
        a[i]=a[i];
        else
        a[i]-=32;
        b[i]=a[i];
    }
    cout<<"Change Case is "<<b;
}