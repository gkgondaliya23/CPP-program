// constructor overloading
#include<iostream>
using namespace std;
class conover
{
    public:
    conover()
    {
        cout<<"\nDefault....";
    }
    conover(int n)
    {
        cout<<"\nParameterized constructor... int :"<<n;
    }
    conover(int a,int b)
    {
        cout<<"\nParameterized constructor... int :"<<a+b;
    }
    conover(char ch)
    {
        cout<<"\nParameterized constructor... ch :"<<ch;
    }
};

int main()
{
    //conover();
    conover(50);
    conover(10,20);
    conover('A');

}