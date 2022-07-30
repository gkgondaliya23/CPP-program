// multilevel inheritance
#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    void set_a()
    {
        cout<<"Enter value of A: ";
        cin>>a;
    }
    void display_a()
    {
        cout<<"\nEnter value of A: "<<a;
        
    }
};
class B : public A
{
    public:
    int b;
    void set_b()
    {
        cout<<"Enter value of B: ";
        cin>>b;
    }
    void display_b()
    {
        cout<<"\nEnter value of B: "<<b;
        
    }
};
class C : public B
{
    int c,x;
    public:
    void set_c()
    {
        set_a();
        set_b();
        cout<<"Enter value of C: ";
        cin>>c;
    }
    void display_c()
    {
        display_a();
        display_b();
        cout<<"\nEnter value of C: "<<c;
        
    }
    void cal()
    {
        x = a*b*c;
        cout<<"\nProduct of "<<a<<" * "<<b<<" * "<<c<<" is: "<<x;
    }
};
int main()
{
    C c1;
    c1.set_c();
    c1.display_c();
    c1.cal();
    return 0;
}