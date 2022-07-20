/*
    A   B   C   D   E
    F   G   H   I   J
    K   L   M   N   O
    P   Q   R   S   T
    U   V   W   X   Y
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<" "<<(char)n;
            n++;
        }
        cout<<"\n";
    }
    return 0;
}