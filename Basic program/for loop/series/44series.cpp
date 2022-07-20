// print 1,2,4,8,16,.....
#include<iostream>
using namespace std;
int main()
{
    int i,n,a;
    cout<<"Enter number: ";
    cin>>n;
    for(i=1;i<=n;i*=2)
    {
        cout<<" "<<i;
        
    }
    
    return 0;
}