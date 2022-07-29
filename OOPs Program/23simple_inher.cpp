// inheritance introduction
// simple inheritance
#include <iostream>
using namespace std;
class a             // base class
{
public:
    a()
    {
        cout << "\nConstructor A called...";
    }
    ~a()
    {
        cout << "\nDestructor A called...";
    }
};
class b : public a // derived class
{
public:
    b()
    {
        cout << "\nConstructor B called...";
    }
    ~b()
    {
        cout << "\nDestructor B called...";
    }
};
int main()
{
    b B; // create derived class object
    return 0;
}