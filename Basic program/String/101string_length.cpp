// string length
#include<iostream>
using namespace std;
int main()
{
    char a[20];
    int i;
    cout<<"Enter String=";
    cin>>a;
    for(i=0;a[i]!='\0';i++);
    {
        cout<<" "<<i;
    }
}