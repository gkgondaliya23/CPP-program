// Hybrid Inheritance (Bank management)
#include <iostream>
#include <string>
using namespace std;

class bank
{
protected:
    float bal;

public:
    int deposite(int);
    int withdraw(int);
    int showbal();
};
int bank ::deposite(int d)
{
    bal += d;
}
int bank ::withdraw(int w)
{
    if (w < bal)
    {
        bal -= w;
        cout << "\n\t\t\tYour account withdraw " << w << " rupees.";
    }
    else
        cout << "\n\t\t\tInsufficient Balance";
}
int bank ::showbal()
{
    return bal;
}
class saving : public bank
{
    int s_bal = 100;

public:
    // saving(int a)
    // {
    //     s_bal = a;
    // }
    int s_deposite(int d)
    {
        s_bal = s_bal + d;
    }
    int s_withdraw(int w)
    {
        if (w < s_bal)
        {
            s_bal = s_bal - w;
            cout << "\n\t\t\tYour account withdraw " << w << " rupees.";
        }
        else
            cout << "\n\t\t\tInsufficient Balance";
    }
    int s_showbal()
    {
        return s_bal;
    }
};
class current : public bank
{
    int c_bal = 10000;

public:
    // current(int a)
    // {
    //     c_bal = a;
    // }
    int c_deposite(int d)
    {
        c_bal = c_bal + d;
    }
    int c_withdraw(int w)
    {
        if (w < c_bal)
        {
            c_bal = c_bal - w;
            cout << "\n\t\t\tYour account withdraw " << w << " rupees.";
        }
        else
            cout << "\n\t\t\tInsufficient Balance";
    }
    int c_showbal()
    {
        return c_bal;
    }
};
class person : public saving, public current
{
public:
    string name, type;
    int accno;
    person()
    {
        cout << "hello" << endl;
    }
    void get_data()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter Account number: ";
        cin >> accno;
        cout << "please select your Account type: ";
        cin >> type;
    }
    void display()
    {
        cout << "\nYour name is: " << name;
        cout << "\nYour Account number is: " << accno;
        cout << "\nYour Account type is: " << type;
    }
};
int main()
{
    person p;
    p.get_data();
    p.display();
    bool b1;
    b1 = p.type == "current";

    int n;
    while (n != 0)
    {
        cout << endl;
        cout << "\n\t\t\t-------Choice---------" << endl;
        cout << "\t\t\tEnter 1 for Deposite";
        cout << "\n\t\t\tEnter 2 for Withdraw";
        cout << "\n\t\t\tEnter 3 for Show Balance";
        cout << "\n\t\t\tEnter 4 for Change Account type";
        // cout << "\n\t\t\tEnter 5 for Show Account type";
        cout << "\n\t\t\tEnter 0 for Exit";
        cout << "\n";
        cout << "\n\t\t\tEnter your choice: ";
        cin >> n;
        switch (n)
        {
        case 1:
            int deposite, pan;
            cout << "\n\t\t\tEnter deposite amount: ";
            cin >> deposite;
            if (b1 == 0)
            {
                if (deposite >= 5000)
                {
                    cout << "\n\t\t\tEnter PAN number: ";
                    cin >> pan;
                    p.s_deposite(deposite);
                }
                else
                    p.s_deposite(deposite);
            }
            else
            {
                p.c_deposite(deposite);
            }
            cout << "\n\t\t\tYour account added " << deposite << " rupees.";
            break;
        case 2:
            int withdraw;
            cout << "\n\t\t\tEnter withdraw amount: ";
            cin >> withdraw;
            if (b1 == 0)
                p.s_withdraw(withdraw);
            else
                p.c_withdraw(withdraw);
            break;
        case 3:
            if (b1 == 0)
                cout << "\n\t\t\tYour saving account balance is:  " << p.s_showbal();
            else
                cout << "\n\t\t\tYour current account balance is:  " << p.c_showbal();
            break;
        case 4:
            if (b1 == 0)
            {
                cout << "\n\t\t\tYour saving account is: " << p.s_showbal();
                b1 = 1;
            }
            else
            {
                cout << "\n\t\t\tYour current account is: " << p.c_showbal();
                b1 = 0;
            }
            break;
        case 0:
            break;
        default:
            cout << "\n\t\t\tYour choice is wrong";
            break;
        }
    }
}