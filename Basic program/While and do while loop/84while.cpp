// while loop and do while loop (A-65 to Z-90)
#include<iostream>
using namespace std;
int main()
{
    int i;
    i=65;
    // while (i<=90)
    // {
    //     cout<<" "<<char(i)<<"-"<<char(i+32);
    //     i++;
    // }
    do
    {
        cout<<" "<<char(i)<<"-"<<char(i+32);
        i++;
    } while (i<=90);
    
    return 0;
}