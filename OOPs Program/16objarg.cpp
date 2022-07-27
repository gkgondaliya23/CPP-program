// Object as argument and Object as return
#include<iostream>
using namespace std;

class Example{
    public:
    int a;

    Example add(Example Ea, Example Eb) // object as argument
    {
        Example Ec;
        Ec.a = Ea.a + Eb.a;
        return Ec;          // object as return
    }
};
int main()
{
    Example e1,e2,e3;
    e1.a = 50, e2.a = 100, e3.a =0;

    cout<<"Value of Object 1: "<<e1.a;
    cout<<"\nValue of Object 2: "<<e2.a;

    e3 = e3.add(e1, e2);
    cout<<"\nValue of Object 3: "<<e3.a;
    return 0;
}