// Book management
#include <iostream>
using namespace std;
class book
{
    float amt, TotalAmt=0, Discount=0, GST=0;
    string name;
public:
    book();
    ~book();
    void kalam(float);
    void fire(float);
    void wisdom(float);
    void mastery(float);
    void guide1(float);
    void guide2(float);
    void latter(float);
};
book ::book()
{
    cout << "\t\t\t\t================================" << endl;
    cout << "\t\t\t\t      ||SWARA BOOK STORE ||" << endl;
    cout << "\t\t\t\t================================" << endl;
    cout << endl;
    cout << "\t\t\t\t    BOOK NAME\t\t PRICE" << endl;
    cout << "\t\t\t   -----------------------------------------" << endl;
    cout << "\t\t\t   1. TURNING POINTS\t\t 80.00/-" << endl;
    cout << "\t\t\t   2. WINGS OF FIRE\t\t 110.00/-" << endl;
    cout << "\t\t\t   3. FAMILY WISDOM\t\t 120.00/-" << endl;
    cout << "\t\t\t   4. THE MASTERY MANUAL    \t 150.00/-" << endl;
    cout << "\t\t\t   5. THE GREATNESS GUIDE 1\t 130.00/-" << endl;
    cout << "\t\t\t   6. THE GREATNESS GUIDE 2\t 130.00/-" << endl;
    cout << "\t\t\t   7. THE SECRATE LATTER\t 100.00/-" << endl;
    cout << "\t\t\t   -----------------------------------------" << endl;
    cout << "\t\t\t   ENTER 0 FOR CONFIRM YOUR ORDER" << endl;
    cout<<"\t\t\t\tEnter your name: ";
    getline(cin, name);
}
book ::~book()
{
    if (TotalAmt > 1000 && TotalAmt <= 2000)
    {
        Discount = TotalAmt * 0.10;
        TotalAmt -= Discount;
    }
    else if (TotalAmt > 2000 && TotalAmt <= 3000)
    {
        Discount = TotalAmt * 0.20;
        TotalAmt -= Discount;
    }
    else if (TotalAmt > 3000)
    {
        Discount = TotalAmt * 0.30;
        TotalAmt -= Discount;
    }
    float GST = TotalAmt * 0.05;
    TotalAmt += GST;
    cout << "\n\t\t\t\t---------Your Order Bill---------";
    cout << "\n\t\t\t\t---------------------------------";
    cout << "\n\t\t\t\t=> Your Name : "<<name;
    cout << "\n\n\t\t\t\t=> Total Discount : " << Discount;
    cout << "\n\n\t\t\t\t=> GST(2.5 CGST,2.5 SGST) : " << GST;
    cout << "\n\n\t\t\t\t=> Total Payable Bill : " << TotalAmt;
    cout << "\n\n\t\t\t\t---------------------------------";
    cout << endl;
    cout << "\t\t\t\t*********************************" << endl;
    cout << "\t\t\t\t    || THANKS FOR VISITING ||" << endl;
    cout << "\t\t\t\t*********************************" << endl;
}
void book ::kalam(float qty)
{
    amt = qty * 80.00;
    TotalAmt = TotalAmt + amt;
}
void book ::wisdom(float qty)
{
    amt = qty * 120.00;
    TotalAmt = TotalAmt + amt;
}
void book ::fire(float qty)
{
    amt = qty * 110.00;
    TotalAmt = TotalAmt + amt;
}
void book ::mastery(float qty)
{
    amt = qty * 150.00;
    TotalAmt = TotalAmt + amt;
}
void book ::guide1(float qty)
{
    amt = qty * 130.00;
    TotalAmt = TotalAmt + amt;
}
void book ::guide2(float qty)
{
    amt = qty * 130.00;
    TotalAmt = TotalAmt + amt;
}
void book ::latter(float qty)
{
    amt = qty * 100.00;
    TotalAmt = TotalAmt + amt;
}

int main()
{
    int n, qty;
    book b;
    while (n != 0)
    {
        cout << "\n\t\t\t\tOrder Your Book No: ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "\t\t\t\tQuntity of TURNING POINTS book:";
            cin >> qty;
            b.kalam(qty);
            break;
        case 2:
            cout << "\t\t\t\tQuntity of WINGS OF FIRE book:";
            cin >> qty;
            b.fire(qty);
            break;
        case 3:
            cout << "\t\t\t\tQuntity of FAMLIY WISDOM book:";
            cin >> qty;
            b.wisdom(qty);
            break;
        case 4:
            cout << "\t\t\t\tQuntity of THE MASTERY MANUAL book:";
            cin >> qty;
            b.mastery(qty);
            break;
        case 5:
            cout << "\t\t\t\tQuntity of THE GREATNESS GUIDE 1 book:";
            cin >> qty;
            b.guide1(qty);
            break;
        case 6:
            cout << "\t\t\t\tQuntity of THE GREATNESS GUIDE 2 book:";
            cin >> qty;
            b.guide2(qty);
            break;
        case 7:
            cout << "\t\t\t\tQuntity of THE SECRATE LATTER book:";
            cin >> qty;
            b.latter(qty);
            break;
        case 0:
            break;

        default:
            cout << "\t\t\t\tYour Choice is Wrong.";
            break;
        }
    }
}