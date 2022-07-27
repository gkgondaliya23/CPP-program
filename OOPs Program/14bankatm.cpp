// bank deposite and withdraw 
#include<iostream>
using namespace std;

class bank
{
    float bal;
    public: 
    bank(int);
    int deposit_bal(int);    
    int withdraw_bal(int);    
    int show_bal();    
};
bank :: bank(int amt)
{
    bal = amt;
}
int bank :: deposit_bal(int deposit)
{
    bal = bal + deposit;
}
int bank :: withdraw_bal(int withdraw)
{
    if(withdraw > bal)
        cout<<"\nYou not able to Withdraw";
    else
        bal = bal - withdraw;
}
int bank :: show_bal()
{
    return bal;
}
int main()
{
    int ch;
    bank b(100);
    do
    {
        cout<<"\n**** CHOICES ****";
        cout<<"\n**** ENTER 1 FOR DEPOSITE ****";
        cout<<"\n**** ENTER 2 FOR WITHDRAW ****";
        cout<<"\n**** ENTER 3 FOR SHOW BALANCE ****";
        cout<<"\n**** ENTER 0 FOR EXIT ****";
        cout<<"\n";
        cout<<"\n";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: int deposite;
                    cout<<"\nEnter deposite ammount: ";
                    cin>>deposite;
                    b.deposit_bal(deposite);
                    cout<<"\n "<<deposite<<" is added in your bank.";
                    break;
            
            case 2: int withdraw;
                    cout<<"\nEnter Withdraw ammount: ";
                    cin>>withdraw;
                    b.withdraw_bal(withdraw);
                    cout<<"\nyou withdraw "<<withdraw<<" rupees.";
                    break;

            case 3: 
                    cout<<"\nTotal amount in your bank is: "<<b.show_bal();
                    break;
            case 0:
                    break;
            default:
                    cout<<"Invalid choice";
        }

    } while (ch !=0);
    
    return 0;
}