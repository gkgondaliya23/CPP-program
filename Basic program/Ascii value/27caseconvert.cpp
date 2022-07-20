// case converting
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter ch: ";
    cin>>ch;

    if((int)ch>=65 && (int)ch<=90 )
    {
        cout<<"case convert : "<<(char)(ch+32);
    }
    if((int)ch>=97 && (int)ch<=122 )
    {
        cout<<"case convert : "<<(char)(ch-32);
    }
    return 0;
}