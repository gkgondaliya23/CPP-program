// oprator overloading
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

    Box operator+(Box&b)            // oprator overloading
    {
        Box box;
        box.length = length + b.length;
        box.breadth = breadth + b.breadth;
        box.height = height + b.height;
        return box;
    }

};

int main()
{
    Box box1,box2,box3;     // object creat
    double volume = 0.0;
    box1.setdata(2.0,2.0,2.0);  // input data
    box2.setdata(3.0,3.0,3.0);  // input data

    volume = box1.getvolume();
    cout<<"Volume of Box1: "<<volume;

    volume = box2.getvolume();
    cout<<"\nVolume of Box2: "<<volume;

    box3 = box1 + box2;
    volume = box3.getvolume();
    cout<<"\nVolume of Box3: "<<volume;

    return 0;
}