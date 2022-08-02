// static member in Box volume
#include <iostream>

using namespace std;

class Box
{
private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
public:
    static int objectCount;

    Box(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
        objectCount++;      //static function member
    }
    double Volume()
    {
        return length * breadth * height;
    }
    static int getCount()
    {
        return objectCount;
    }
};

int Box::objectCount = 0;

int main(void)
{
    cout << "Inital Stage Count: " << Box::getCount() << endl;

    Box Box1(3.3, 4.4, 5.5);
    Box Box2(8.0, 6.0, 2.0);

    cout << "\nBox 1 Volume is: " << Box1.Volume() << endl;
    cout << "\nBox 2 Volume is: " << Box2.Volume() << endl;

    cout << "\nFinal Stage Count: " << Box::getCount() << endl;

    return 0;
}