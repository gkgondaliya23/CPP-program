// print -n to n
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter number: ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        cout<<" -"<<i;
    }
    for(i=0;i<=n;i++)
    {
        cout<<" "<<i;
    }
    return 0;
}