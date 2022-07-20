// while loop and do while loop (even number)
#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"Enter number: ";
    cin>>n;
    // while (i<=n)
    // {
    //     if(i%2==0)  
    //     {
    //     cout<<" "<<i;
    //     } 
    //     i++;
    // }
    do
    {
        if(i%2==0)  
        {
        cout<<" "<<i;
        } 
        i++;
    } while (i<=n);
    
    return 0;
}