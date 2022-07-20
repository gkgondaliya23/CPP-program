// print 1,1,2,3,5,.....(fibonnaci series)
#include<iostream>
using namespace std;
int main()
{
    int i,n,a=0,b=1,c;
    cout<<"Enter number: ";
    cin>>n;
    cout<<b;
    for(i=1;i<=n;i++)
    {
        c = a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
    
    return 0;
}