// Function introduction (WAWR)
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int n1,n2;
    cout<<"Enter number: ";
    cin>>n1>>n2;
    cout<<"\nTotal sum: "<<sum(n1,n2);
    return 0;
}