// Hierarchical Inheritance (Bank management)
#include <iostream>
#include <string>
using namespace std;

class bank
{
    string name;
    int accno;

protected:
    string type;
    float bal;

public:
    // bank();
    //~bank();
    int deposite(int);
    int withdraw(int);
    int showbal();
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
// bank ::bank()
// {
//     cout << "\t\t\t============================" << endl;
//     cout << "\t\t\tWelcome to SWARA Co.op Bank" << endl;
//     cout << "\t\t\t============================" << endl;

// }
// bank ::~bank()
// {
//     cout << "\t\t\t============================" << endl;
//     cout << "\t\t\t    Thanks For a Visit....." << endl;
//     cout << "\t\t\t============================" << endl;
// }
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
public:
    saving(int a)
    {
        cout << "\t\t\t==============================" << endl;
        cout << "\t\t\t Welcome to SWARA Co.op Bank " << endl;
        cout << "\t\t\t==============================" << endl;
        bal = a;
    }
    ~saving()
    {
        cout << "\t\t\t============================" << endl;
        cout << "\t\t\t     Thanks For a Visit     " << endl;
        cout << "\t\t\t============================" << endl;
    }
};
class current : public bank
{
public:
    current(int a)
    {
        bal = a;
    }
};

int main()
{
    current k(1000);
    saving g(100);
    char c;
    cout << "\n\t\t\tSaving for s Or Current for c" << endl;
    cout << "\t\t\tEnter your Account Type: ";
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
            cout << "\n";
            cout << "\n\t\t\tEnter your choice: ";
            cin >> n;
            switch (n)
            {
            case 1:
                int deposite, pan;
                cout << "\n\t\t\tEnter deposite amount: ";
                cin >> deposite;
                if (deposite >= 5000)
                {
                    cout << "\n\t\t\tEnter PAN number: ";
                    cin >> pan;
                    g.deposite(deposite);
                }
                else
                    g.deposite(deposite);
                cout << "\n\t\t\tYour account added " << deposite << " rupees.";
                break;
            case 2:
                int withdraw;
                cout << "\n\t\t\tEnter withdraw amount: ";
                cin >> withdraw;
                g.withdraw(withdraw);
                break;
            case 3:
                cout << "\n\t\t\tTotal amount in your account is: " << g.showbal();
                break;
            case 0:
                break;
            default:
                cout << "\n\t\t\tYour choice is wrong";
                break;
            }
        }
    }
    else if (c == 'c' || c == 'C')
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
            cout << "\n";
            cout << "\n\t\t\tEnter your choice: ";
            cin >> n;
            switch (n)
            {
            case 1:
                int deposite;
                cout << "\n\t\t\tEnter deposite amount: ";
                cin >> deposite;
                k.deposite(deposite);
                cout << "\n\t\t\tYour account added " << deposite << " rupees.";
                break;
            case 2:
                int withdraw;
                cout << "\n\t\t\tEnter withdraw amount: ";
                cin >> withdraw;
                k.withdraw(withdraw);
                break;
            case 3:
                cout << "\n\t\t\tTotal amount in your account is: " << k.showbal();
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