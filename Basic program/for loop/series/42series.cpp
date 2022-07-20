// print 1, 4, 9, 16, .....
#include<iostream>
using namespace std;
int main()
{
    int i,n,a;
    cout<<"Enter number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a = i*i;
        cout<<" "<<a;
    }
    
    return 0;
}