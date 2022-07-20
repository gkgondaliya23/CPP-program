/*
    1
    0 1
    0 1 0
    1 0 1 0
    1 0 1 0 1
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(n%2!=0)
            cout<<" 1";
            else
            cout<<" 0";
            n++;  
        }       
        cout<<"\n";
    }
    return 0;
}