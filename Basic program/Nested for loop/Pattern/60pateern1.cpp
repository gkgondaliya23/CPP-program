/*
    1
    1   2
    1   2   3
    1   2   3   4
    1   2   3   4   5
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    return 0;
}