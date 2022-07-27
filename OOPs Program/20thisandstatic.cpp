// this pointer and static counter
#include<iostream>
using namespace std;
class bank{
    int accno, balance;
    string user_name;
    public:
    static int count;               //static counter delcare
    bank(int acc, int bal, string my_name)
    {
        this->accno = acc;                  // this pointer
        this->balance = bal;
        this->user_name = my_name;
        count++;
    }
    void getdata()
    {
        cout<<"\n"<<user_name<<"\t"<<accno<<"\t"<<balance;
    }
};
int bank :: count;          
int main()
{
    bank a(101,50000,"Swara"),b(201,20000,"Mantra"),c(301,50000,"OM");
    a.getdata();
    b.getdata();
    c.getdata();
    cout<<"\nNo of count: "<<bank::count;
    return 0;
}