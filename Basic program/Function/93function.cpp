// print perfect number print using function
#include<iostream>
using namespace std;
int perfect(int n)
{
    int i,k=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            k += i;
        }
    }
    cout<<"\n";
    if(k==n)
    {
        cout<<"Yes "<<k<<" is perfect number.";
    }
    else
    {
        cout<<"No "<<n<<" is not perfect number.";
    }
}
int main()
{
    int a;
    cout<<"Enter number: ";
    cin>>a;
    perfect(a);
    return 0;
}