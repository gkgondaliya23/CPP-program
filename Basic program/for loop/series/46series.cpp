// print A,C,E,G,I.....
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    for(i=65;i<=90;i++)
    {
        if(i%2!=0)
        cout<<" "<<(char)i;
    }
    
    return 0;
}