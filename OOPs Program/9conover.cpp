// constructor overloading (volume of solid shape)
#include<iostream>
using namespace std;
class volume
{
    public:
    volume(int a)
    {
        cout<<"\nVolume of Cube: "<<(a*a*a);
    }
    volume(int x, int y, int z)
    {
        cout<<"\nVolume of Rectangular prisam: "<<(x*y*z);
    }
    volume(int r,int h)
    {
        cout<<"\nVolume of Cylinder: "<<(3.14*r*r*h);
    }
};
int main()
{
    volume(5),volume(3,4,5),volume(5,10);
}