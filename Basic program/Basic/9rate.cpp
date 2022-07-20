// enter rate and qty into bill printing
#include<iostream>
using namespace std;
int main()
{
    int rate,qty,amt,dis,bill,gst,net;
    cout<<"Enter Rate: ";
    cin>>rate;
    cout<<"Enter Quantity: ";
    cin>>qty;
    amt = rate * qty;
    dis = amt * 0.05;
    bill = amt - dis;
    gst = bill * 0.18;
    net = bill + gst;
    cout<<"\nRate\tQuantity\tAmount\tDiscount\tBill\tGst\tNetbill ",
    cout<<"\n"<<rate<<"\t  "<<qty<<"    \t"<<amt<<"    \t"<<dis<<"      \t"<<bill<<"   \t"<<gst<<"   \t"<<net;
}