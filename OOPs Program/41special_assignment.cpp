// special assignment
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float pi = 3.146278;
    int a, b, c;
    a = b = c = 10;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << setprecision(2) << pi << endl;
    cout << setprecision(3) << pi << endl;
    cout << setprecision(4) << pi << endl;
    return 0;
}