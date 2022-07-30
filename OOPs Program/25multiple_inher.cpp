// multiple inheritance
#include <iostream>
using namespace std;
class A             //base 1 class
{
public:
    A()
    {
        cout << "\nConstructor A called...";
    }
    ~A()
    {
        cout << "\nDestructor A called...";
    }
};
class B            //base 2 class
{
public:
    B()
    {
        cout << "\nConstructor B called...";
    }
    ~B()
    {
        cout << "\nDestructor B called...";
    }
};
class C : public A, public B        //derived class
{
public:
    C()
    {
        cout << "\nConstructor C called...";
    }
    ~C()
    {
        cout << "\nDestructor C called...";
    }
};
int main()
{
    C c;
    return 0;
}