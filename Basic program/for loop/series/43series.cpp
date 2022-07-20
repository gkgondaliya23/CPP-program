// print 1, 4, 3, 16, 5,.....
#include<iostream>
using namespace std;
int main()
{
    int i,n,a;
    cout<<"Enter number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        a = i*i;
        cout<<" "<<a;
        }
        else
        {
            cout<<" "<<i;
        }
    }
    
    return 0;
}