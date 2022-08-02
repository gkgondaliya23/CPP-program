// virtual function
#include<iostream>
using namespace std;
class Base
{
    public:
    void display()
    {
        cout<<"Base display called..."<<endl;
    }
    virtual void show()     // virtual function
    {
        cout<<"Base Show called...."<<endl;
    }
};
class Derived : public Base
{
    public:
    void display()
    {
        cout<<"Derived display called..."<<endl;
    }
    void show()
    {
        cout<<"Derived Show called...."<<endl;
    }
};
int main()
{
    Base b,*a;
    Derived d;
    //pointer to Base class
    a = &b;
    a->display();
    a->show();
    
    //pointer to Derived class
    a = &d;
    a->display();
    a->show();

    return 0;
}

/*
Rules for Virtual Functions

1. Virtual functions cannot be static.
2. A virtual function can be a friend function of another class.
3. Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
4. The prototype of virtual functions should be the same in the base as well as derived class.
5. They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
6. A class may have virtual destructor but it cannot have a virtual constructor.

*/