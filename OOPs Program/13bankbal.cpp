// using constructor (bank deposite and withdraw) 
#include<iostream>
using namespace std;

class bank
{
    int bal, dep, with;  //deposite and withdraw
    public:
    bank(int a,int b)
    {
        dep = a;
        with = b;

        if(b<=a)
            bal = a-b;
        else
            bal = a;
    }
    void showBal()
    {
        cout<<"Balance after depoiste: "<<dep;
        cout<<"\nBalance after withdraw: "<<bal;
    }

};
int main()
{
    bank swara(500,100);
    swara.showBal();
    return 0;
}