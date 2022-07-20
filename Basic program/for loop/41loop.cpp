// print 1 to n (even sum)
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum+=i;
    }
    cout<<"\nTotal sum: "<<sum;
    return 0;
}