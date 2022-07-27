// friend function (find any two number of largest number)
#include<iostream>
using namespace std;

class largest{
    int a,b,m;
    public:
    void set_data();
    friend void find_max(largest);      //friend function declare
};
void largest :: set_data()
{
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
}
void find_max(largest t)            // friend function
{
    if(t.a>t.b)
        t.m = t.a;
    else
        t.m = t.b;
    cout<<"Largest number is: "<<t.m;
}
int main()
{
    largest t;
    t.set_data();
    find_max(t);            //friend function called
    return 0;
}