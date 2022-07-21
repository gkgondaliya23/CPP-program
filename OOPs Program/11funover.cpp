// Function overloading (Area of various shape)
#include<iostream>
using namespace std;
class area
{
    public:
    int vol(int a)
    {
        return (a*a);
    }
    double vol(double b)
    {
        return (3.14*b*b);
    }
    int vol(int x, int y)
    {
        return (x*y);
    }
    double vol(double b, double h)
    {
        return (0.5*b*h);
    }

};
int main()
{
    area a1;
        cout<<"\nArea of Square: "<<a1.vol(10);
        cout<<"\nArea of Rectangle: "<<a1.vol(3,4);
        cout<<"\nArea of Triangle: "<<a1.vol(10.5,5.0);
        cout<<"\nArea of Circle: "<<a1.vol(5.0);
}