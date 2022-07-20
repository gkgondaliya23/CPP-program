// print A,c,E,g,I.....
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    for(i=0;i<20;i++)
    {
        if(i%4==0)
        {
        cout<<" "<<(char)(i+65);
        }
        else
        {
         cout<<" "<<(char)(i+32+65);   
        }
        i++;
    }
    
    return 0;
}