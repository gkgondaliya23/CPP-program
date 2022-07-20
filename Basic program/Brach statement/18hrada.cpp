// salary counting HRA and DA
#include<iostream>
using namespace std;
int main()
{
    int salary,hra,da;
    cout<<"Enter your salary: ";
    cin>>salary;

    if(salary<=5000)
    {
        hra = salary * 0.08;
        da = salary * 0.20;
    }
    else if(5000<salary && salary<= 10000)
    {
        hra = salary * 0.12;
        da = salary * 0.30;
    }
    else if(10000<salary && salary<= 15000)
    {
        hra = salary * 0.15;
        da = salary * 0.40;
    }
    else if(15000<salary)
    {
        hra = salary * 0.20;
        da = salary * 0.50;
    }

    cout<<"HRA: "<<hra;
    cout<<"\nDA: "<<da;
    
    return 0;
}