// conveting amount into INR using function
#include<iostream>
using namespace std;
int amount(int n)
{
    int i,b=0,d;
    int a[]={500,200,100,50,20,10,5,2,1};
    for(i=0;i<9;i++)
    {
        if(n>=a[i])
        {
        d = n/a[i];
        b+=d;
        cout<<"\t"<<a[i]<<": "<<b;
        n=n%a[i];
        b-=d;
        }  
    }
}
int main()
{
    int x;
    cout<<"Enter amount: ";
    cin>>x;
    amount(x);
    return 0;
}