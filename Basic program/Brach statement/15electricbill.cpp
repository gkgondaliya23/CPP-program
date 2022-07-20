//Electircity bill
#include<iostream>
using namespace std;
int main()
{
    int unit,bill,a;
    cout<<"Enter unit: ";
    cin>>unit;

    if(unit<=100)
    {
        bill = unit*0.6 + 50;
    }
    else if(100<unit && unit<=300)
    {
        bill = 110 + (unit-100)*0.8;
    }
    else if(300<unit)
    {
        bill = 110 + 160 + (unit-300)*0.9;
    }
    cout<<"your bill is "<<bill;

    if(bill>=300)
    {
        a = bill*0.15;
        bill = bill + a;
        cout<<"\nyour bill with Extra charge : "<<bill;
    }
    return 0;
}