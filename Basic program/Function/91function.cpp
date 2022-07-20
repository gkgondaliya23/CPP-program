// simple intrest using function
#include<iostream>
using namespace std;
int intrest(int a, int b,int c)
{
    return (a*b*c)/100;
}
int main()
{
    int n1,n2,n3;
    cout<<"Enter number: ";
    cin>>n1>>n2>>n3;
    cout<<"\nTotal Intrest is: "<<intrest(n1,n2,n3);
    return 0;
}