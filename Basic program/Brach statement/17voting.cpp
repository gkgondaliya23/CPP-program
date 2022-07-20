// person eligble for voting or not
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age>=18)
    {
        cout<<"You are eligible for voting";
    }
    else
    {
        cout<<"You are not eligible for voting";
    }
    return 0;
}