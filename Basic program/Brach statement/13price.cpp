//read price of item in decimal(rupees and paisa)
#include<iostream>
using namespace std;
int main()
{
    int rupees,paisa;
    float price;
    cout<<"Enter price: ";
    cin>>price;
    rupees = price;
    paisa = ((float)price - rupees)*100;
    cout<<"Rupees: "<<rupees;
    cout<<"\nPaisa: "<<paisa;
    return 0;
}