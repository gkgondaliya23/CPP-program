// print 1 to n sum
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"\nTotal sum: "<<sum;
    return 0;
}