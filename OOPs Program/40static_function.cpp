// static function member
#include <iostream>
using namespace std;
class Example
{
    static int Number;
    int n;
public:
    void set_n()
    {
        n = ++Number;
    }

    void show_n()
    {
        cout << "value of n = " << n << endl;
    }

    static void show_Number()       // static function 
    {
        cout << "value of Number = " << Number << endl;
    }
};

int Example::Number;

int main()
{
    cout << "\nInital Stage "<<endl;
    Example::show_Number();
    
    Example example1, example2;

    example1.set_n();
    example2.set_n();

    example1.show_n();
    example2.show_n();

    cout << "\nFinal Stage "<<endl;
    Example::show_Number();

    return 0;
}