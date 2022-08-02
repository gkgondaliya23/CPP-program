// static member data
#include <iostream>
#include <string.h>
using namespace std;
class Car
{
private:
    int car_id;
    char car_name[20];
    int marks;

public:
    // declare a static data member
    static int static_member;
    Car()
    {
        static_member++;
    }

    void input()                // input the data
    {
        cout << " \n\n Enter the Id of the Car: ";
        cin >> car_id; 
        cout << " Enter the name of the Car: ";
        cin >> car_name;
        cout << " Number of the Marks (1 - 10): ";
        cin >> marks;
    }

    void display()                 // display the entered details
    {
        cout << " \n Id of the Car: " << car_id;
        cout << "\n Name of the Car: " << car_name;
        cout << " \n Marks: " << marks;
    }
};

// initialized the static data member to 0
int Car::static_member = 0;

int main()
{
    // create object for the class Car
    Car c1,c2;

    c1.input();
    c2.input();
    
    c1.display();
    c2.display();

    cout << " \n No. of objects created in the class: " << Car ::static_member << endl;
    return 0;
}