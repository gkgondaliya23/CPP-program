// recursion function (fibonaci)
#include<iostream>
using namespace std;
int fibbo(int a)
{
    if(a==0)
        return 0;
    else if(a==1)
        return 1;
    else
        return (fibbo(a-2) + fibbo(a-1));
}
int main()
{
    int n,i;
    cout<<"Enter number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<" "<<fibbo(i);
    }
}