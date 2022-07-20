// enter value check positive, negative and zero
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n==0)
    {
        cout<<n<<" is zero";
    }
    else if(n<0)
    {
        cout<<n<<" is negative.";
    }
    else
    {
        cout<<n<<" is positive.";
    }
    return 0;
}