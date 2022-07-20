// tax slab for income
#include<iostream>
using namespace std;
int main()
{
    int income,bill;
    cout<<"Enter your income: ";
    cin>>income;

    if(income<=2500)
    {
        bill = income*0;
    }
    else if(2500<income && income<=5000)
    {
        bill = (income-2500)*0.10;
    }
    else if(5000<income && income<=10000)
    {
        bill = 250 + (income-5000)*0.20;
    }
    else if(10000<income)
    {
        bill = 1250 + (income-10000)*0.30;
    }

    cout<<"your tax is: "<<bill;
    return 0;
}