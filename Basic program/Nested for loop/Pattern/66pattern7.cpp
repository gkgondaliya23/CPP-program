/*
    A
    b   c
    D   E   F
    g   h   i   j
    K   L   M   N   O
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                cout<<" "<<char(n);
                n++;
            }
            else
            {
                cout<<" "<<char(n+32);
                n++;
            }
        }       
        cout<<"\n";
    }
    return 0;
}