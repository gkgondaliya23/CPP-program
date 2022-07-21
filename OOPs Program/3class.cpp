// class using Arithmatic opration
#include<iostream>
using namespace std;
class opration
{
    int total;           // private with this context
    public:
    void set_sum(int a, int b) // set data
    {
        total = a + b;
    }
    void set_sub(int a, int b) // set data
    {
        total = a - b;
    }
    void set_mul(int a, int b) // set data
    {
        total = a * b;
    }
    void set_div(int a, int b) // set data
    {
        total = a / b;
    }
    int getdata()       // get data
    {
        return total;
    }
};
int main()
{
        opration s1;
        s1.set_sum(4,5);
        cout<<"Addition: "<<s1.getdata();
        s1.set_sub(8,12);
        cout<<"\nSubstrates: "<<s1.getdata();
        s1.set_mul(5,11);
        cout<<"\nMultiplication: "<<s1.getdata();
        s1.set_div(84,12);
        cout<<"\nDivision: "<<s1.getdata();
}