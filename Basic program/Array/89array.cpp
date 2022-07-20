//      matrix       
//      1   2   3       digonal element sum
//      4   5   6       upper triangle sum
//      7   8   9       lower triangle sum
#include<iostream>
using namespace std;
int main()
{
    int a[5][5],i,j;
    int x=0,y=0,z=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
            if(i==j)
            {
                x += a[i][j];
            }
            if(i>j)
            {
                y += a[i][j];
            }
            if(i<j)
            {
                z += a[i][j];
            }  
        }
        cout<<"\n";
    }
    cout<<"\nDigonal Element sum: "<<x;
    cout<<"\nUpper Tirangle Element sum: "<<z;
    cout<<"\nLower Triangle Element sum: "<<y;
    return 0;
}