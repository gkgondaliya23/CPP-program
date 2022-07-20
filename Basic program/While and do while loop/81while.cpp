// while loop and do while loop (-n to n number)
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter number: ";
    cin>>n;
    i=-n;
    // while (i<=n)
    // {
    //     cout<<" "<<i++;
    // }
    do
    {
        cout<<" "<<i++;
    } while (i<=n);
    
    return 0;
}