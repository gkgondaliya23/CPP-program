// Hierarchical Inheritance

#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<< "\nConstructor A called..";
    }
    ~A()
    {
        cout<<"\nDestructor A called..";
    }
};
class B : public A
{
    public:
    B()
    {
        cout<< "\nConstructor B called..";
    }
    ~B()
    {
        cout<<"\nDestructor B called..";
    }
};
class C : public A
{
    public:
    C()
    {
        cout<< "\nConstructor C called..";
    }
    ~C()
    {
        cout<<"\nDestructor C called..";
    }
};
int main()
{
    B b;
    C c;
    return 0;
}