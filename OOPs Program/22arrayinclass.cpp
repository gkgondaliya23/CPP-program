// array in class
#include <iostream>
using namespace std;
class Myclass
{
    int x; //private variable
public:
    void set_X() //setter
    {
        cout << "Enter x : ";
        cin >> x;
    }
    int get_x() //function for calculating sum
    {
        return x;
    }
};
int main()
{
    Myclass obj1[5];
    int i;
    for (int i = 0; i < 3; i++)
        obj1[i].set_X();
    for (int i = 0; i < 3; i++)
        cout << "\n x : " << obj1[i].get_x();
    return 0;
}