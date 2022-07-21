// Function overloading (volume of solid shape)
#include<iostream>
using namespace std;
class volume
{
    public:
    int vol(int a)          //function for cube volume 
    {
        return (a*a*a);
    }
    int vol(int x, int y, int z)        //function for Rectangular volume
    {
        return (x*y*z);
    }
    int vol(int r,int h)        //function for cylinder volume
    {
        return (3.14*r*r*h);
    }

};
int main()
{
    volume v1;
        cout<<"\nVolume of Cube: "<<v1.vol(10);
        cout<<"\nVolume of Rectangular prisam: "<<v1.vol(3,4,5);
        cout<<"\nVolume of Cylinder: "<<v1.vol(5,5);
}