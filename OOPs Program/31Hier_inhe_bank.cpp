// Hierarchical Inheritance
#include <iostream>
#include <string>
using namespace std;

class bank
{
    string name;
    int accno;
    string type;

public:
    bank();
    ~bank();
    void get_data()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter Account number: ";
        cin >> accno;
        cout << "Account type: ";
        cin >> type;
    }
    void display()
    {
        cout << "\nYour name is: " << name;
        cout << "\nYour Account number is: " << accno;
        cout << "\nYour Account type is: " << type;
    }
};
bank ::bank()
{
    cout << "\t\t\t============================" << endl;
    cout << "\t\t\tWelcome to SWARA Co.op Bank" << endl;
    cout << "\t\t\t============================" << endl;
}
bank ::~bank()
{
    cout << "\t\t\t============================" << endl;
    cout << "\t\t\t    Thanks For a Visit....." << endl;
    cout << "\t\t\t============================" << endl;
}
class saving : public bank
{
    float s_bal;

public:
    saving(int amt)
    {
        s_bal = amt;
    }
    int s_deposite(int d)
    {
        s_bal += d;
    }
    int s_withdraw(int w)
    {
        if (w > s_bal)
            cout << "\n\t\t\tInsufficient Balance in your Account.";
        else
        {
            s_bal -= w;
            cout << "\n\t\t\tYour account withdraw " << w << " rupees.";
        }
    }
    int s_showbal()
    {
        return s_bal;
    }
};
class current : public bank
{
    float c_bal;

public:
    current(int amt)
    {
        c_bal = amt;
    }
    int c_deposite(int d)
    {
        c_bal += d;
    }
    int c_withdraw(int w)
    {
        if (w > c_bal)
            cout << "\n\t\t\tInsufficient Balance in your Account.";
        else
        {
            c_bal -= w;
            cout << "\n\t\t\tYour account withdraw " << w << " rupees.";
        }
    }
    int c_showbal()
    {
        return c_bal;
    }
};

int main()
{
    current k(1000);
    saving g(100);
    char c;
    cout << "\ns for Saving Or c for current";
    cout << "\nEnter your Account Type: ";
    cin >> c;
    if (c == 's' || c == 'S')
    {
        g.get_data();
        g.display();
        int n;
        while (n != 0)
        {
            cout << endl;
            cout << "\n\t\t\t-------Choice---------" << endl;
            cout << "\t\t\tEnter 1 for Deposite";
            cout << "\n\t\t\tEnter 2 for Withdraw";
            cout << "\n\t\t\tEnter 3 for Show Balance";
            cout << "\n\t\t\tEnter 0 for Exit";
            cout << "\n\n";
            cout << "\n\t\t\tEnter your choice: ";
            cin >> n;
            switch (n)
            {
            case 1:
                int deposite;
                cout << "\n\t\t\tEnter deposite amount: ";
                cin >> deposite;
                g.s_deposite(deposite);
                cout << "\n\t\t\tYour account added " << deposite << " rupees.";
                break;
            case 2:
                int withdraw;
                cout << "\n\t\t\tEnter withdraw amount: ";
                cin >> withdraw;
                g.s_withdraw(withdraw);
                break;
            case 3:
                cout << "\n\t\t\tTotal amount in your account is: " << g.s_showbal();
                break;
            case 0:
                break;
            default:
                cout << "\n\t\t\tYour choice is wrong";
                break;
            }
        }
    }
    else if(c=='c' || c=='C')
    {
        k.get_data();
        k.display();
        int n;
        while (n != 0)
        {
            cout << endl;
            cout << "\n\t\t\t-------Choice---------" << endl;
            cout << "\t\t\tEnter 1 for Deposite";
            cout << "\n\t\t\tEnter 2 for Withdraw";
            cout << "\n\t\t\tEnter 3 for Show Balance";
            cout << "\n\t\t\tEnter 0 for Exit";
            cout << "\n\n";
            cout << "\n\t\t\tEnter your choice: ";
            cin >> n;
            switch (n)
            {
            case 1:
                int deposite;
                cout << "\n\t\t\tEnter deposite amount: ";
                cin >> deposite;
                k.c_deposite(deposite);
                cout << "\n\t\t\tYour account added " << deposite << " rupees.";
                break;
            case 2:
                int withdraw;
                cout << "\n\t\t\tEnter withdraw amount: ";
                cin >> withdraw;
                k.c_withdraw(withdraw);
                break;
            case 3:
                cout << "\n\t\t\tTotal amount in your account is: " << k.c_showbal();
                break;
            case 0:
                break;
            default:
                cout << "\n\t\t\tYour choice is wrong";
                break;
            }
        }
    }
}