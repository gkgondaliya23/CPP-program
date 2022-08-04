#include <iostream>
#include <math.h>
using namespace std;
class bank
{
    float p, emi, ir, pr, r, t;

public:
    int set_emi();
    int get_emi();
};
int bank ::set_emi()
{
    cout << "Enter your Loan amount: ";
    cin >> p;
    cout << "Enter intrest rate: ";
    cin >> r;
    r = r / 1200;
    cout << "Enter number of years: ";
    cin >> t;
    t = t * 12;
    emi = (p * r * pow(1 + r, t) / (pow(1 + r, t) - 1));
}
int bank ::get_emi()
{
    cout<<endl;
    cout<<" Principal\tEMI\t\tintrest\t\tprincipalre\tprincipal"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    for (; p >= 0;)
    {
        cout << p;
        cout << "\t\t" << emi;
        ir = p * r;
        cout << "\t\t" << ir;
        pr = emi - ir;
        cout << "\t\t" << pr;
        p = p - pr;
        cout << "\t\t" << p;
        cout << endl;
    }
}
int main()
{
    bank swara;
    swara.set_emi();
    swara.get_emi();
    return 0;
}