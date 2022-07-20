// swapping value using third variable.
#include<iostream>
using namespace std;      
int main()
{
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    c=a,a=b,b =c;

    cout<<"\na :"<<a;
    cout<<"\nb :"<<b;
}
