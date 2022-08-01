// Hybrid Inheritance
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\nConstructor A called...";
    }
};
class B : public A
{
    public:
    B()
    {
        cout<<"\nConstructor B called...";
    }
};
class C : public A
{
    public:
    C()
    {
        cout<<"\nConstructor C called...";
    }
};
class D : public B, public C
{
    public:
    D()
    {
        cout<<"\nConstructor D called...";
    }
};
int main()
{
    D d;   
    return 0;
}