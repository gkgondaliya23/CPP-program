// reverse number print using function
#include<iostream>
using namespace std;
int reverse(int a)
{
    int b=0,rem;
    while(a!=0)
    {
        rem = a%10;
        b = b*10 + rem;
        a = a/10;
    }
    return b;
    
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Rverse number: "<<reverse(n);
    return 0;
}