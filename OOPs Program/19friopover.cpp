// using friend function unary oprator overloading
#include <iostream>
using namespace std;
class box
{
private:
    double l, b, h;

public:
    double getvolume()
    {
        return l * b * h;
    }
    void setdata(double length, double breadth, double height)
    {
        l = length;
        b = breadth;
        h = height;
    }

    friend box operator+(box b1);
};

box operator+(box b1) // friend function with one object argument
{
    b1.l++;
    b1.b++;
    b1.h++;
    return b1;       // return as object
}

int main()
{
    box b1, b2;
    double volume = 0.0;
    b1.setdata(2.0, 2.0, 2.0);

    volume = b1.getvolume();
    cout << "Volume of Box 1: " << volume;

    b2 = +b1;

    volume = b2.getvolume();
    cout << "\nVolume of Box 2: " << volume;

    return 0;
}