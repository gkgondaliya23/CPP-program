// 5 students marks, percentage and garde using array
#include<iostream>
using namespace std;
int main()
{
    float a[5],b[5],c[5],t,p;
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<"\n";
    for(i=0;i<5;i++)
    {
        cout<<"b["<<i<<"]: ";
        cin>>b[i];
    }
    cout<<"\n";
    for(i=0;i<5;i++)
    {
        cout<<"c["<<i<<"]: ";
        cin>>c[i];
    }
    cout<<"Maths\tSci\tEng\tTotal\tPer\tGrade"<<endl;
    for(i=0;i<5;i++)
    {
        t = a[i] + b[i] + c[i];
        p = t/3;
        cout<<"\n"<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t"<<t<<"\t"<<p<<"\t";
        if(p<33||a[i]<33||b[i]<33||c[i]<33)
        {
            cout<<"Fail";
        }
        else if (p>=33 && p<50)
        {
            cout<<" D";
        }
        else if (p>=50 && p<65)
        {
            cout<<" C";
        }
        else if (p>=65 && p<80)
        {
            cout<<" B";
        }
        else if (p>=85)
        {
            cout<<" A";
        }
    }
    
    return 0;
}