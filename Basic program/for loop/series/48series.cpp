// print 0.5, 1, 2.5, 5,......
#include<iostream>
using namespace std;
int main()
{
    float i,n,a=0.5,b;
    cout<<"Enter number: ";
    cin>>n;
    cout<<a;
    for(i=0.5;i<=n;i++)
    {
        a = a + i;
        cout<<" "<<a;
    }  
    return 0;
}