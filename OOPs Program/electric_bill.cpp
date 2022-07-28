// Electric Bill
#include <iostream>
using namespace std;

class ElectricBill
{
    int c_Id;
    char c_Name[50];
    int units;
    double bill_Bal;

public:
    void get();
    void put();
    void calc_Amt();
    
};
void ElectricBill :: get()
    {
        cout << "Please enter detail of customer below:"
             << endl;
        cout << "Enter customer id: ";
        cin >> c_Id;
        cout << "Enter customer Name: ";
        cin >> c_Name;
        cout << "Enter the number of units consumed: ";
        cin >> units;
    }
void ElectricBill :: put()
    {
        cout << "\nCustomer details \n";
        cout << "Customer id is: " << c_Id << endl;
        cout << "Customer Name is: " << c_Name << endl;
        cout << "Number of units consumed : " << units << endl;
        cout << "Units consumed Bill: " << bill_Bal << endl;
    }
void ElectricBill :: calc_Amt()
    {
        get();
        if (units <= 100)
            bill_Bal = units * 0.60 + 50;
        else if (100 < units && units <= 300)
            bill_Bal = 60 + 50 + (units - 100) * 0.80;
        else if (units > 300)
            bill_Bal = 60 + 160 + 50 + (units - 300) * 0.90;
        
        if(bill_Bal>=300)
        {
            bill_Bal = bill_Bal + (bill_Bal*0.15);
        }
    }

int main()
{
    ElectricBill b;
    //b.get();
    b.calc_Amt();
    b.put();

    return 0;
}