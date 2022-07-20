/*
    1   1   1   1   1
    3   3   3   3   3
    5   5   5   5   5
    7   7   7   7   7
    9   9   9   9   9
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i%2!=0)
            cout<<" "<<i;
        }
        cout<<"\n";
    }
    return 0;
}