// Bank management
#include <iostream>
using namespace std;

class bank
{
    float bal;

public:
    bank(int);
    void deposite(int d);
    void withdraw(int w);
    int showbal();
    ~bank();
};
bank ::bank(int amount)
{
    bal = amount;
}
bank ::~bank()
{
    cout << endl;
    cout << "\t\t\t------ Thanks For VISIT! -----" << endl;
    cout << "\t\t\t------ Have A Nice Day!!! -----" << endl;
}
void bank ::deposite(int d)
{
    bal = bal + d;
}
void bank ::withdraw(int w)
{
    if (w > bal)
        cout << "\n\t\t\tYou not able to withdraw balance.";
    else
    {
        bal = bal - w;
    }
}
int bank ::showbal()
{
    return bal;
}

int main()
{
    bank b(100);
    int ch;
    while (ch != 0)
    {
        cout << endl;
        cout << "\n\t\t\t-------Choice---------" << endl;
        cout << "\t\t\tEnter 1 for Deposite";
        cout << "\n\t\t\tEnter 2 for Withdraw";
        cout << "\n\t\t\tEnter 3 for Show Balance";
        cout << "\n\t\t\tEnter 0 for Exit";
        cout << "\n\n";
        cout << "\n\t\t\tEnter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int deposite;
            cout << "\n\t\t\tEnter deposite amount: ";
            cin >> deposite;
            b.deposite(deposite);
            cout << "\n\t\t\tYour account added " << deposite << " rupees.";
            break;
        case 2:
            int withdraw;
            cout << "\n\t\t\tEnter withdraw amount: ";
            cin >> withdraw;
            b.withdraw(withdraw);
            cout << "\n\t\t\tYour account withdraw " << withdraw << " rupees.";
            break;
        case 3:
            cout << "\n\t\t\tTotal amount in your account is: " << b.showbal();
            break;
        case 0:
            break;
        default:
            cout << "\n\t\t\tYour choice is wrong";
            break;
        }
    }
}