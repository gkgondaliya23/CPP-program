// recursion function (factorial)
#include<iostream>
using namespace std;
int factorial(int a)
{
    if(a<=1)
        return 1;
    else
        return a * factorial(a-1);
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Given number Factorial is: "<<factorial(n);
}