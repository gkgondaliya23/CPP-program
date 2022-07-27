// using friend function binary oprator overloading
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

    friend box operator+(box b1, box b2);
};

box operator+(box b1, box b2)       //friend function with two object argument
{
    box temp;
    temp.l = b1.l + b2.l;
    temp.b = b1.b + b2.b;
    temp.h = b1.h + b2.h;
    return temp;                    //return as object
}
int main()
{
    box b1, b2, b3;
    double volume = 0.0;
    b1.setdata(2.0, 2.0, 2.0);
    b2.setdata(3.0, 3.0, 3.0);

    volume = b1.getvolume();
    cout << "Volume of Box 1: " << volume;

    volume = b2.getvolume();
    cout << "\nVolume of Box 2: " << volume;

    b3 = b1 + b2;

    volume = b3.getvolume();
    cout << "\nVolume of Box 3: " << volume;

    return 0;
}