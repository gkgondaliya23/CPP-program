//Unary oprator overloading
#include<iostream>
using namespace std;
class Box{
    private:
    double length,breadth,height;
    public:
    double getvolume()         // calculation of volume
    {
        return length * breadth * height;
    }
    void setdata(double len,double bre, double hei) // setdata
    {
        length = len;
        breadth = bre;
        height = hei;
    }

    Box operator++()
    {
        Box box;
        box.length = length++;
        box.breadth = breadth++;
        box.height = height++;
        return box;
    }

};

int main()
{
    Box box1;     // object creat
    double volume = 0.0;
    box1.setdata(2.0,2.0,2.0);  // input data
    
    volume = box1.getvolume();
    cout<<"Volume of Box 1: "<<volume;

    // oprator overloading
        ++box1;
    volume = box1.getvolume();
    cout<<"\nAfter increment Volume of Box 1: "<<volume;

    return 0;
}