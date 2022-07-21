// constructor introduction
#include<iostream>
using namespace std;
class test          //class name
{
    int n;          //private data
    public:
    test()          // default constructor
    {
        cout<<"Hello...";
    }
    test(int a)     // patameterized constructor
    {
        n = a;
    }
    int getdata()   // getter
    {
        return n;
    }
};

int main()
{
    test t1(10);
    cout<<"\n n: "<<t1.getdata();
}
/*
    constructor called automatically
    constructor no return value
    constructor can not be private
    constructor use for initilize
*/