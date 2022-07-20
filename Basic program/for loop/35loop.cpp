// print 1 to n (Even number)
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        cout<<" "<<i;
    }
    return 0;
}