// print A-a to Z-z
#include<iostream>
using namespace std;
int main()
{
    int i;
    
    for(i=65;i<=90;i++)
    {
        cout<<" "<<(char)i<<"-"<<(char)(i+32);
    }
    return 0;
}