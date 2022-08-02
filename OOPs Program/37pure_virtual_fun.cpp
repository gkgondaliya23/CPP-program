// pure virtual function
#include<iostream>
using namespace std;
class Base
{
    public:
    void display()
    {
        cout<<"Base display called..."<<endl;
    }
    virtual void show() = 0;    //pure virtual function

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
    Base *a;
    Derived d;
    //pointer to Base class
    // a->display();
    // a->show();
    
    //pointer to Derived class
    a = &d;
    a->display();
    a->show();

    return 0;
}
