/*
    5
    4   4
    3   3   3
    2   2   2   2
    1   1   1   1   1
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" "<<n;
        }
        n--;
        cout<<"\n";
    }
    return 0;
}