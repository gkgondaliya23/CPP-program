//students grade system
#include<iostream>
using namespace std;
int main()
{
    int maths,sci,eng,total;
    float per;
    cout<<"Enter Maths mark: ";
    cin>>maths;
    cout<<"Enter Science mark: ";
    cin>>sci;
    cout<<"Enter English mark: ";
    cin>>eng;
    total = maths + sci + eng;
    per = total/3;
    cout<<"Total marks: "<<total;
    cout<<"\nPercentge: "<<per;

    if(per<35 || maths<35 || sci<35 || eng<35)
    {
        cout<<"\n you are fail";
    }
    else if(35<=per && per<45)
    {
        cout<<"\nGrade D";
    }
    else if(45<=per && per<60)
    {
        cout<<"\nGrade C";
    }
    else if(60<=per && per<75)
    {
        cout<<"\nGrade B";
    }
    else if(75<=per)
    {
        cout<<"\nGrade A";
    }
    return 0;
}