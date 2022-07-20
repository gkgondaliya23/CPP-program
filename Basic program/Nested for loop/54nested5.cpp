/*
    2   2   2   2   2
    4   4   4   4   4
    6   6   6   6   6
    8   8   8   8   8
    10   10   10   10   10
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
            if(i%2==0)
            cout<<" "<<i;
        }
        cout<<"\n";
    }
    return 0;
}