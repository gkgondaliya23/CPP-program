// print 1,4,12,32,.....
#include<iostream>
using namespace std;
int main()
{
    int i,n,a=1;
    cout<<"Enter number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<" "<<a*i;
        a+=a;
    }
    
    return 0;
}