// x<2000 and 3000<x & 100<y<500 print x, y
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;

    if(x<2000 ||3000<x)
    {
        cout<<"x: "<<x;
    }
    if(100<y && y<500)
    {
        cout<<"\ny: "<<y;
    }
    return 0;
}