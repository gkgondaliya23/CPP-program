// class introdution using privet and public
#include<iostream>
using namespace std;
class car
{
    int tyre;           // private with this context
    public:
    void settyre(int n) // set data
    {
        tyre = n;
    }
    int gettyre()       // get data
    {
        return tyre;
    }
};
int main()
{
        car alto;
        alto.settyre(4);
        cout<<"Tyre: "<<alto.gettyre();
}