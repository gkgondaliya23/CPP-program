// destructor introduction
// destructor called auto when object creat [tield(~) sign]
#include<iostream>
using namespace std;
class test
{
    int n;
    public:
    test()      // constructor
    {
        cout<<"Hello... ";
    }
    test(int a) // parameterized consturctor
    {
        n = a;
    }
    ~test()     //destructor
    {
        cout<<"\nDestructor called....";
    }
    int get_n()
    {
        return n;
    }

};
int main()
{
    test t1(5),t2,t3;
    cout<<"\n n: "<<t1.get_n();
}