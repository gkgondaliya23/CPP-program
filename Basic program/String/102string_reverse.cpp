#include<iostream>
using namespace std;
int main()
{
    char a[20],b[20];
    int i,j,len;
    cout<<"Enter String=";
    cin>>a;
    for(i=0;a[i]!='\0';i++);
    len=i;
    for(i=len-1,j=0;i>=0,j<=len;i--,j++)
    {
        b[j]=a[i];
        b[len]='\0';
        b[i]==32;
    }
    cout<<" "<<b;
}