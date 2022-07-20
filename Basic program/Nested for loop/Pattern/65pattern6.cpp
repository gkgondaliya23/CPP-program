/*
    A
    A   B
    A   B   C
    A   B   C   D
    A   B   C   D  E
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            cout<<" "<<char(j);
        }       
        cout<<"\n";
    }
    return 0;
}