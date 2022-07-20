/*
    A   A   A   A   A
    B   B   B   B   B
    C   C   C   C   C
    D   D   D   D   D
    E   E   E   E   E
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<" "<<(char)i;
        }
        cout<<"\n";
    }
    return 0;
}