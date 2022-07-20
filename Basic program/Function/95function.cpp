// global variable using function
#include<iostream>
using namespace std;
int a[5],b[5],c[5],t,p;
int total(int a[5],int b[5], int c[5])
{
    int i;
    cout<<"Maths\tSci\tEng\tTotal\tPer\tGrade";
    for(i=0;i<3;i++)
    {
        t = a[i] + b[i] + c[i];
        p = t/3;
        cout<<"\n"<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t"<<t<<"\t"<<p<<"\t";
        if(a[i]<33 || b[i]<33 || c[i]<33 || p<33)
        {
            cout<<"Fail";
        }
        else if(p>=33 && p<50)
        {
            cout<<" D";
        }
        else if(p>=50 && p<65)
        {
            cout<<" C";
        }
        else if(p>=65 && p<80)
        {
            cout<<" B";
        }
        else if(p>=80)
        {
            cout<<" A";
        }
    }
}
int entermarks()
{
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        cout<<"b["<<i<<"]: ";
        cin>>b[i];
    }
    for(i=0;i<3;i++)
    {
        cout<<"c["<<i<<"]: ";
        cin>>c[i];
    }
    total(a,b,c);
}
int main()
{
    entermarks();
    return 0;
}