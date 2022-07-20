// a,b,c find largest no of among them
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    if(a>b || a>c)
    {
        cout<<a<<" is largest no of them.";
    }
    else
    {
        if (b>c)
        {
            cout<<b<<" is largest no of them.";
        }
        else
        {
            cout<<c<<" is largest no of them.";
        }
        
    }
    return 0;
}