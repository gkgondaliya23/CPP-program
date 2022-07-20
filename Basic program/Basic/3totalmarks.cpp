// three subject marks enter find total marks and percentage. 
#include<iostream>
using namespace std;
int main()
{
    int maths,sci,eng,total;
    float per;
    cout<<"Enter maths: ";
    cin>>maths;
    cout<<"Enter sci: ";
    cin>>sci;
    cout<<"Enter eng: ";
    cin>>eng;
    total = maths + sci + eng;
    per = total/3;
    cout<<"\nTotal marks: "<<total;
    cout<<"\nPercentage: "<<(float)per;
}